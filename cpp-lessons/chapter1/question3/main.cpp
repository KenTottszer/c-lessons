#include <iostream>

int main(){
    std::cout << "Enter in the first integer ";
    int firstNum{};
    std::cin >> firstNum;
    std::cout << "\nEnter in the second integer ";
    int secondNum{};
    std::cin >> secondNum;

    std::cout << "\nThe answer to " << firstNum << " + " << secondNum << " is " << firstNum + secondNum << "\n";

    std::cout << "The answer to " << firstNum << " - " << secondNum << " is " << firstNum - secondNum << "\n";

    return 0;



}