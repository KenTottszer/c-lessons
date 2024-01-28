#include <stdio.h>

int main(){
    int array[10];
    int min, max;
    printf("Input ten numbers:\n\n");
    for (int i = 0; i < 10; i++){
        printf("Number %d is: ", i+1);
        scanf("%d", &array[i]);
    }
    max= min=array[0];
    for (int i = 0; i < 10; i++){
        if (array[i]<min){
            min=array[i];
        }
        else if (array[i]>max){
            max=array[i];
        
        }
    }
    printf("Min = %d\nMax = %d\n", min, max);
return 0;
}   
