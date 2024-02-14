#include <iostream>
#include <vector>
#include <string_view>

namespace Items{
    enum Type{
        health_potion,
        torch,
        arrow,
        max_items
    };
}

std::string_view getItemNamePlural(Items::Type type)
{
    switch (type)
    {
        case Items::health_potion:  return "health potions";
        case Items::torch:          return "torches";
        case Items::arrow:          return "arrows";

        default:                    return "???";
    }
}

std::string_view getItemNameSingular(Items::Type type)
{
    switch (type)
    {
        case Items::health_potion:  return "health potion";
        case Items::torch:          return "torch";
        case Items::arrow:          return "arrow";

        default:                    return "???";
    }
}


void printInventoryItem(const std::vector<int>& inventory, Items::Type type)
{
    bool plural { inventory[type] != 1 };
    std::cout << "You have " << inventory[type] << ' ';
    std::cout << (plural ? getItemNamePlural(type) : getItemNameSingular(type)) << '\n';
}

int main(){
    std::vector<int> arr{1, 5, 10};
    int sum{0};
    for (int i=0; i < Items::max_items; ++i)
    {
        auto item { static_cast<Items::Type>(i) };
        printInventoryItem(arr, item);
    }

    return 0;
}