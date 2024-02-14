#include <iostream>
#include <vector>
#include <limits>


void ignoreLine(){
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

template<typename T>
void printArray(const std::vector<T> arr){
    std::size_t length (std::size(arr));
    for (int i = 0; i < length; i++){
        std::cout << arr[i] << " ";
    }
}
    
int getNumber(){
    int num{};
    std::cout << "\nType a number between 1 and 9: ";
    while(true){
        std::cin >> num;
        if(num > 9 || num < 0 || !std::cin.eof() && std::cin.peek() != '\n'){
            if (std::cin.eof()) {
                exit(0); 
            }
            std::cin.clear(); 
            ignoreLine(); 
            std::cout << "Invalid. Try again: ";
        }
        else{
            ignoreLine();
            return num;
        }
    }
}

template<typename T>
bool searchArray(std::vector<T> arr, int num){
    std::size_t length (std::size(arr));
    for (int i = 0; i < length ; i++){
        if(arr[i] == num){
            return true;
        }
    }
    return false;
}


int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };
    int num1{getNumber()};
    if(searchArray(arr, num1)){
        std::cout << "This number is in the array \n";
    }
    else{
        std::cout << "This number is not in the array \n";
    }
    printArray(arr); 
    int num2{getNumber()};
    if(searchArray(arr, num2)){
        std::cout << "This number is in the array \n";
    }
    else{
        std::cout << "This number is not in the array \n";
    }
    printArray(arr);

    return 0;
}