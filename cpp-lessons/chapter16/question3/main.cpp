#include <iostream>
#include <vector>
template<typename T>
std::pair <std::size_t, std::size_t>takePair (std::vector <T> v){
    std::size_t min { 0 };
    std::size_t max { 0 };
    for (std::size_t index { 0 }; index < v.size(); ++index)
    {
        if (v[index] < v[min])
            min = index;
        if (v[index] > v[max])
            max = index;
    }

    return { min, max };

}

int main(){
      std::vector v1 { 3, 8, 2, 5, 7, 8, 3 };


    auto m1 { takePair(v1) };
    std::cout << "The min element has index " << m1.first << " and value " << v1[m1.first] << '\n';
    std::cout << "The max element has index " << m1.second << " and value " << v1[m1.second] << '\n';

    std::cout << '\n';

    std::vector v2 { 5.5, 2.7, 3.3, 7.6, 1.2, 8.8, 6.6 };
  

    auto m2 { takePair(v2) };
    std::cout << "The min element has index " << m2.first << " and value " << v2[m2.first] << '\n';
    std::cout << "The max element has index " << m2.second << " and value " << v2[m2.second] << '\n';
}