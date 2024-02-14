#include <iostream>
#include <vector>

void names(int range){

    for (int i{1}; i <= range; i++){
        bool state{false};
        if (i%3 == 0){
            std::cout << "FIZZ";
            state = true;
        }
        if (i%5 == 0){
            std::cout << "BUZZ";
            state = true;
        }
        if (i%7 == 0){
            std::cout << "POP";
            state = true;
        }
        if (i%11 == 0){
            std::cout << "BANG";
            state = true;
        }
        if (i%13 == 0){
            std::cout << "JAZZ";
            state = true;
        }
        if (i%17 == 0){
            std::cout << "POW";
            state = true;
        }
        if (i%19 == 0){
            std::cout << "BOOM";
            state = true;
        }
        if(!state){
            std::cout << i;
        }
        std::cout << "\n";
        
    }
}


int main(){
    names(150);

    return 0;




}