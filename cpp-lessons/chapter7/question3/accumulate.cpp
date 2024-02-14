#include "accumulate.h"
#include <iostream>

int accumulate(int num){
    static int sum{0};
    std::cout << "Sum is " << sum << " right now\n";
    sum += num;
    return sum; 
}