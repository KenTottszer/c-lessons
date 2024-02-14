#include <iostream>
#include <vector>
#include <string>

namespace Names{
    enum Animals{
        chicken, 
        dog, 
        cat, 
        elephant, 
        duck,  
        snake
    };

};




int main(){

    std::vector<Names::Animals> animal{Names::chicken, Names::dog, Names::cat, Names::elephant,  Names::duck, Names::snake};
    for(int i : animal){
        if(Names::chicken || Names::duck){
            std::cout << i << " has 2 legs\n";
        }
        else if(Names::dog || Names::cat || Names::elephant){
            std::cout << i << " has 4 legs\n";
        }
        else{
            std::cout << i << " has 0 legs\n";
        }
        
    }
}