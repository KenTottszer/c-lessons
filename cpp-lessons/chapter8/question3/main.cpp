#include <iostream>
#include "random.h"

bool playAgain() {
    while (true) { 
        std::cout << "Would you like to play again? y/n\n";
        char c{};
        std::cin >> c;

        if (c == 'y' || c == 'Y') {
            return true; 
        } else if (c == 'n' || c == 'N') {
            std::cout << "Goodbye.\n";
            return false;  
        } else {
            std::cout << "Invalid option. "; 
        }
    }
}

void game(){ 
    int randomNumber {Random::get(1,100)};
    int counter{0};
    std::cout << "Pick a number between 1 and 100, in atleast 7 goes. I will tell you if it is lower or higher: ";
    
    int guess{};
    std::cin >> guess;
    
    while(guess!=randomNumber){
        ++counter;
        std::cout << counter << "\n";
        if(counter >= 7){
            std::cout << "You lost...\n";
            return;
        }
        if(guess>randomNumber){
            std::cout << "Your guess is greater than the random number\n";
        }
        else{
            std::cout << "Your guess is less than the random number\n";
        }
        std::cout << "Guess again: ";
        std::cin >> guess;
    }
    std::cout << "CONGRATS!! You won!\n";
    return; 

}






int main(){
        
        game();
        while(playAgain()){
            game();
        }

    return 0;
}