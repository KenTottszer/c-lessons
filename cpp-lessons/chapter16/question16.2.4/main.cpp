#include <iostream>
#include <vector>





int main(){
    std::vector<int> integers(3);
    int sum{};
    int product{1};
    std::cout << "Type in 3 integers: ";
    for (int i = 0; i < 3; i++){
        std::cin >> integers[i];
        sum+= integers[i];
        product*= integers[i];
    }
    std::cout << "The sum is: " << sum << "\n";
    std::cout << "The product is: " << product << "\n";
    
}