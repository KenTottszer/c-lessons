#include <iostream>


void sort2(int& x, int& y){
    int temp{};
    
    if( x > y){
        temp = x;
        x = y;
        y = temp;
    }


}

int main()
{
    int x {5 };
    int y { 7};

    std::cout << x << ' ' << y << '\n'; // should print 7 5

    sort2(x, y); // make sure sort works when values need to be swapped
    std::cout << x << ' ' << y << '\n'; // should print 5 7

    sort2(x, y); // make sure sort works when values don't need to be swapped
    std::cout << x << ' ' << y << '\n'; // should print 5 7

    return 0;
}