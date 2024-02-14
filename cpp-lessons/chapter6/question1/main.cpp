#include <iostream>
#include <string_view>


int inputInteger(){
    int x{};
    std::cout << "Input an integer: ";
    std::cin >> x;
    return x;
    
}
constexpr void isEven(int num){
    if((num % 2) == 0){
        std::cout << num << " is even\n";

    }
    else{
        std::cout << num << " is odd\n";
    }
}


int main(){
    
    isEven(inputInteger());
    return 0;
}