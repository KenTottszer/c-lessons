#include <iostream>


int readNumber();
void writeAnswer(int x, int y);

int main(){
    int firstNumber{readNumber()};
    int secondNumber{readNumber()};
    writeAnswer(firstNumber, secondNumber);
    return 0;
}