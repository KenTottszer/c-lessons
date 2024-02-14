#include <iostream>
#include <vector>
#include <string>
#include <string_view>


template<typename T>
bool isValueInArray(const std::vector<T>& names, std::string_view name){
    for (const auto& num : names){
        if(name == num){
            return true;
        }
    }
    return false;
}

int main(){
    std::vector names{"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};
    std::string name1{};
    std::cout << "enter a name: ";
    std::cin >> name1;

    if(isValueInArray(names, name1)){
         std::cout << name1 << " is in the set\n";
    }
    else{
        std::cout << name1 << " is NOT in the set\n";
    }
   
    return 0;
}