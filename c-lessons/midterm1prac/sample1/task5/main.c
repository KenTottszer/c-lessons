#include<stdio.h>

int main(){
    int array[7] = {7, 7, 2, 2, 3, 3, 3};
    
    for (int i = 0; i < 7; i++){
        int test = 0;
        for (int j = 0; j < 7; j++){
            if (array[j]==array[i])
            test ++;  
        }
        if(test==1){
            printf("%d ",array[i]);
        }
    }
    printf("\n");

return 0;
}