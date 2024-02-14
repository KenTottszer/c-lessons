#include <iostream>
#include <vector>

template<typename U>
U findMax(const std::vector<U>& array){
    std::size_t length (std::size(array));
    int max{};
    for (int i = 0; i < length; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    return max;
}

int main()
{
    std::vector testScore { 84, 92, 76, 81, 56 };
    std::cout << "The max score is: " << findMax(testScore) << '\n'; // prints 92

    return 0;
}