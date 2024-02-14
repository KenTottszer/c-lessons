#include <iostream>

int main(){
    int smaller{};
    std::cout << "Enter an integer: ";
    std::cin >> smaller;
    int larger{};
    std::cout << "Enter a larger integer: ";
    std::cin >> larger;

    if (larger > smaller){
        std::cout << "Good job! I am proud of you!\n";
    }
    if (smaller > larger){
        std::cout << "Swapping integers as you screwed up the instructions\n";
        int temp{};
        temp = larger;
        larger = smaller;
        smaller = temp;
    }

    std::cout << "The smaller value is " << smaller << "!\nThe larger value is " << larger << "!\n";

    return 0;
}