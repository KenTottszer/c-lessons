#include <iostream>
#include <cmath>

double findHeightOfBall(int i, double ogHeight){
        double newHeight{};
        newHeight = 4.9 * (i*i);
        return ogHeight - newHeight;
}


int main(){
    int height{};
    std::cout << "What is the height of the tower in meters: ";
    std::cin >> height;
    int timeAllTogether{};
    timeAllTogether = sqrt(height/4.9);
     for (int i = 0; i <= timeAllTogether; i++){
        double d{findHeightOfBall(i, height)};
        std::cout << "At "<< i << " seconds " << d <<" is the height\n";
     }
    std::cout << "At "<< timeAllTogether + 1 << " the ball is on the ground\n";
    return 0;

}