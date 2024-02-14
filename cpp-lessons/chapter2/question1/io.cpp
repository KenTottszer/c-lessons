#include <iostream>

int readNumber(){
    std::cout << "Type in an integer: ";
    int x{};
    std::cin >> x;
    std::cout << "\n";
    return x;
}

void writeAnswer(int x, int y){
    std::cout << x + y << "\n";
}

