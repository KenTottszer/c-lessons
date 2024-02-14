#include <iostream>
#include <vector>


template<typename T>
void printArray(const std::vector<T> arr){
    std::size_t length (std::size(arr));
    for (int i = 0; i < length; i++){
        std::cout << arr[i] << " ";
    }
}
    

int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    printArray(arr); /

    return 0;
}