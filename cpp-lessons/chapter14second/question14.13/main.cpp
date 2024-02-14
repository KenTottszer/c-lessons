#include <iostream>
#include <string>

class Ball{
private:


    std::string m_colour{"black"};
    double m_radius {10.0};

public:
    Ball(std::string colour, double radius):
        m_colour {colour},
        m_radius (radius){
            print();

        }

    Ball(std::string colour):
        m_colour {colour}{
            print();
            
        }
     Ball(){
            print();
            
        }
     Ball(double radius):
        m_radius (radius){
            print();
            
        }
   void print(){
        std::cout << "ball: " << m_colour << ", " << m_radius << "\n";
    }
};

int main()
{
    Ball def{};
    Ball blue{ "blue" };
    Ball twenty{ 20.0 };
    Ball blueTwenty{ "blue", 20.0 };

    return 0;
}