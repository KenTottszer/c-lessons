#include <iostream>


int sumTo(int num){
    int sum{0};
    for (int i = 0; i <= num; i++){
        if (i < num){
            std::cout << i << " + ";    
        }
        else{
            std::cout << i << " = ";
        }
        sum += i;
    }
    
    return sum;
    

}


int main(){

    std::cout << sumTo(9) << "\n";

    return 0;
}