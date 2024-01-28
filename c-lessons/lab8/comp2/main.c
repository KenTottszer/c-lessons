#include <stdio.h>
#include <stdlib.h>


void sortArray(int* arr, int size){
     int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    }
    
int main(){
    int size;
    int* dynamic=NULL;
    printf("Type in the arrays size: ");
    scanf("%d", &size);
    dynamic = (int*)malloc(size*sizeof(int));
    
    printf("Type in the elements below.\n");

    for (int i = 0; i < size; i++){
        printf("Element %d: ", i + 1);
        scanf("%d", &dynamic[i]);
        printf ("\n");
    }
    
    sortArray(dynamic, size);

     printf("\nSorted Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", dynamic[i]);
    }
    printf("\n");
 
    free(dynamic);
 
    return 0;

}