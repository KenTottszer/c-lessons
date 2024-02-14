#include <iostream>

class Fraction{
private:
    int m_num{};
    int m_den{};

public:

     Fraction(int num, int den):
        m_num{num},
        m_den{den}{

    }
    double multiplyNumerator(Fraction second){
    return m_num * second.m_num;
    
    }
    double multiplyDenominator(Fraction second){
    return m_den * second.m_den;
    
    }

};

[[maybe_unused]]int getInput(){
    double n{};
    std::cout << "Write a number:";
    std::cin >> n;

    return n;
}





int main(){
    Fraction first{4, 6};
    Fraction second{3, 2};

    std::cout << "Your answer is " << first.multiplyNumerator(second) << "/" << first.multiplyDenominator(second) << "\n";

}