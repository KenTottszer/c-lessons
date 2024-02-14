#include <iostream>
#include <string_view>

enum class Animal{
    pig,
    chicken,
    goat,
    cat,
    dog,
    duck,
};

std::string_view getAnimalName(Animal animal){
    switch (animal){
    case Animal::pig: return "pig";
    case Animal::chicken: return "chicken";
    case Animal::goat: return "goat";
    case Animal::cat: return "cat";
    case Animal::dog: return "dog";
    case Animal::duck: return "duck";
    default: return "NOT GOOD";
    }
}

int printNumberOfLegs(Animal animal){
    switch(animal){
    case Animal::pig : return 4;
    case Animal::chicken : return 2;
    case Animal::goat : return 4;
    case Animal::cat : return 4;
    case Animal::dog : return 4;
    case Animal::duck : return 2;
    default: return 0;
    }

}






int main(){
    Animal animal{0};

    std::cout << "You chose the animal " << getAnimalName(animal) << ". It has " << printNumberOfLegs(animal) << " legs!\n\n\n\n\n";
    return 0;

}