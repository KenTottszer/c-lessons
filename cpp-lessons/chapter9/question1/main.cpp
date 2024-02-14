#include <iostream>
#include "random.h"
#include <limits>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}


bool playAgain() {
    while (true) { 
        std::cout << "Would you like to play again? y/n\n";
        char c{};
        std::cin >> c;
        if (!std::cin) {
            if (std::cin.eof()){
                exit(0); 
            }

            std::cin.clear(); 
        }
        ignoreLine();

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


int getGuess(){
    int guess{};
   
    while(true){
        std::cin >> guess;
        if(!std::cin || guess < 1 || guess > 100){
             if (std::cin.eof()){
                exit(0);
             }
        std::cin.clear();
        ignoreLine();     
        std::cout << "Oops, that input is invalid.  Please try again.\n";
        }
        else{
            ignoreLine(); 
            return guess;
        }
    }
}
void game() { 
    std::cout << "Pick a number between 1 and 100, in atleast 7 goes. I will tell you if it is lower or higher: ";
    int randomNumber {Random::get(1,100)};
    int counter{0};

    while(true) {
        int guess {getGuess()};
        ++counter;
        if(counter >= 7){
            std::cout << "You lost...\n";
            return;
        }
        if(guess == randomNumber) {
            std::cout << "CONGRATS!! You won!\n";
            return;
        } else if(guess > randomNumber) {
            std::cout << "Your guess is greater than the random number\n";
        } else {
            std::cout << "Your guess is less than the random number\n";
        }
        std::cout << "Guess again: ";
    }
}






int main(){
        game();
        while(playAgain()){
            game();
        }
    return 0;
}