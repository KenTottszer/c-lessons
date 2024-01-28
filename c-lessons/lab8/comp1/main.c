#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calculateSumAndAverage(int* array, int size, int* sum, int* avg){
    *sum=0;
    for (int i = 0; i < size; i++){
         *sum = *sum + array[i];
    }
    *avg = *sum/size;
}

int main(){
    int size, sum, avg;
    int* array=NULL;
    printf("Input the size of the array: ");
    scanf("%d", &size);
    array = (int*)malloc(size*sizeof(int));


    printf("Type in the elements below \n\n");
    for (int i = 0; i < size; i++){
        printf("Element %d is: ", i+1);
        scanf("%d", &array[i]);
    }
    
   calculateSumAndAverage(array, size, &sum, &avg);

   printf("The elements are: ");
   for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
   }
   printf("\n");
   printf("Sum: %d\n", sum);
   printf("Average: %d\n", avg);

return 0;
}