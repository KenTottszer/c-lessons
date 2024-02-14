#include <iostream>

/*Question 4*/


// void fizzbuzz(int range){

//     for (int i = 1; i <=range; i++){
//         if((i%3 == 0) && (i%5 == 0)){
//             std::cout << "FIZZBUZZ";
//         }
//         else if(i%3 == 0){
//             std::cout << "FIZZ";
//         }
//         else if(i%5 == 0){
//             std::cout << "BUZZ";
//         }
//         else{
//             std::cout << i;
//         }
//         std::cout << "\n";
//     }
// }

void fizzbuzzpop(int range){
    
    for (int i{1}; i <= range; i++){
        bool state{false};
        if (i%3 == 0){
            std::cout << "FIZZ";
            state = true;
        }
        if (i%5 == 0){
            std::cout << "BUZZ";
            state = true;
        }
        if (i%7 == 0){
            std::cout << "POP";
            state = true;
        }
        if(!state){
            std::cout << i;
        }
        std::cout << "\n";
        
    }
}


int main(){

    // fizzbuzz(15);
    fizzbuzzpop(150);

    return 0;




}