#include <iostream>
#include <string>


class Ball{
private:
    std::string m_colour{};
    double m_radius{};

public:
    Ball(std::string colour, double radius):
        m_colour{colour},
        m_radius{radius}{

        }
    
    std::string getBallColour(){
        return m_colour;
    }
    double getBallRadius(){
        return m_radius;
    }

     void print()const {
        std::cout << "Colour is "<< m_colour << " and radius is " << m_radius << "\n";
    }
};

void print(Ball ball){
    std::cout << "Colour is "<< (ball.getBallColour()) << " and radius is " << (ball.getBallRadius())<< "\n";

}
int main()
{
	Ball blue{ "blue", 10.0 };
	print(blue);

	Ball red{ "red", 12.0 };
	print(red);

	return 0;
}