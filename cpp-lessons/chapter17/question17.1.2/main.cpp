#include <iostream>
#include <array>

int main(){

    constexpr std::array word{'h', 'e', 'l', 'l', 'o'};
    std::cout << word[1] << "\n";
    return 0; 
}