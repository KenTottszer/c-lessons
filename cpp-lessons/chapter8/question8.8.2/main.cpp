#include <iostream>


void original(){
    // outer loops between 1 and 5
    int outer{ 1 };
    while (outer <= 5)
    {
        // For each iteration of the outer loop, the code in the body of the loop executes once

        // inner loops between 1 and outer
        int inner{ 1 };
        while (inner <= outer)
        {
            std::cout << inner << ' ';
            ++inner;
        }

        // print a newline at the end of each row
        std::cout << '\n';
        ++outer;
    }

}


void inverse(){
    
    for (int i = 5; i >= 1; i--){
        for (int j = i; j >= 1; j--){
            std::cout << j << " ";
            
        }

        std::cout << "\n";
        
        
    }
}


void reverse(){
    
    for (int i = 1; i <= 5; i++){
        for(int j = 5; j>= 1; j--){
            if(j>i){
                std::cout << " ";
            }
            else{  
                std::cout << j;
            }
        }
        std::cout << "\n";
        
    }
    


}

int main()
{
    original();
    std::cout << "\n\n\n\n";
    inverse();
    std::cout << "\n\n\n\n";
    reverse();



    return 0;
}