#include <iostream>

struct Fraction{
    int numerator{};
    int denominator{};
};

Fraction getInput(Fraction x){
    
    std::cout << "Write the numerator: ";
    std::cin >> x.numerator;

    std::cout << "Write the denominator: ";
    std::cin >> x.denominator;

    return x;
}

Fraction multiplyFraction(Fraction x, Fraction y){
    Fraction z{};
    z.numerator = x.numerator*y.numerator;
    z.denominator = x.denominator*y.denominator;

    return z;
}



int main(){
    Fraction firstFraction{};
    Fraction secondFraction{};

    Fraction finalAnswer{multiplyFraction(  getInput(firstFraction),  getInput(secondFraction))};

    std::cout << "Your answer is " << finalAnswer.numerator << "/" << finalAnswer.denominator << "\n";

}