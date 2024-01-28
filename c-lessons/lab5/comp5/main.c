#include <stdio.h>
#define SIZE 5
int main(){
    double array[SIZE];
    int max, min, sum =0;
    printf("Write 5 numbers and I will tell you the min, max and average... \n\n");
    for (int i = 0; i < SIZE; i++){
        printf("\nNumber %d is: ", i+1);
        scanf("%lf", &array[i]);
        if (i == 0) {
            max = min = array[i];
        } 
        else {
            if (array[i] > max) {
                max = array[i];
            }
            if (array[i] < min) {
                min = array[i];
            }
        }
        sum= array[i]+sum;
    }   
    double average = (double)sum / SIZE;
    
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
    printf("Sum of the array elements: %d\n", sum);
    printf("Average of the array elements: %.2f\n", average);
return 0;  
}    
        
        
    

    