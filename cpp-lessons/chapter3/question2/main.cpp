#include <iostream>

int readNumber(double x)
{
	std::cout << "Please enter a number: ";
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The quotient is: " << x << '\n';
}

int main()
{
	double x{ };
	double y{ };
	writeAnswer(readNumber(x)/readNumber(y));

	return 0;
}