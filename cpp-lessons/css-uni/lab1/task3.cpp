#include<iostream>

void f(int& i){
    i += 2;
}

int main(){
    int i{0};
    f(i);
    std::cout << i << "\n";
    return 0;
}


//c++