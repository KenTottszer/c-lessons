#include<iostream>
#include<vector>

int main(){
    std::vector hello{'h', 'e', 'l', 'l', 'o'};
    std::cout << hello.size() << "\n";
    std::cout << std::size(hello) << "\n";
    std::cout << hello.at(1) << hello.at(1) << "\n";

    return 0;

}