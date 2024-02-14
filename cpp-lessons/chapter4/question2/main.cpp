#include <iostream> 


double enterDoubleValue(){
    double d{};
    std::cout << "Enter a number (double): ";
    std::cin >> d;
    return d;
}




int main(){

    double d1{enterDoubleValue()};
    double d2{enterDoubleValue()};
   
    char c {};
    std::cout << "Enter either: +, -, *, or /:\n";
    std::cin >> c;
    
    if (c == '+'){
        std::cout << d1 << " + " << d2 << " = " << (d1 + d2) << "\n";
    }
    else if (c == '-'){
        std::cout << d1 << " - " << d2 << " = " << (d1 - d2)<< "\n";
    }
    else if (c == '*'){
        std::cout << d1 << " * " << d2 << " = " << (d1 * d2)<< "\n";
    }
    else if (c == '/'){
        std::cout << d1 << " / " << d2 << " = " << (d1 / d2)<< "\n";
    }
    else{
        std::cerr << "error!" << "\n";
    }
    return 0;
    






}