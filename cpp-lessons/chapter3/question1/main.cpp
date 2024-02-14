#include <iostream>
#define ENABLE_DEBUG

int readNumber(int x)
{
#ifdef ENABLE_DEBUG
	std::cout << "Please enter a number: ";
	std::cin >> x;
	return x;
#endif
}

void writeAnswer(int x)
{
#ifdef ENABLE_DEBUG
	std::cout << "The sum is: " << x << '\n';
#endif
}

int main()
{

	int x {};
    int y {};
	writeAnswer(readNumber(x)+readNumber(y));
	return 0;

}
