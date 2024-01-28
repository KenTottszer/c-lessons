
#include <stdio.h>
#include <stdlib.h>


int* sortArray(int* arr1, int* arr2, int size1, int size2){
    
    int sizeTotal = size1 + size2;
    int* mergedArray=(int*)malloc(sizeTotal*sizeof(int));
    int i = 0, j = 0, k = 0;
   while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            mergedArray[k] = arr1[i];
            i++;
        } else {
            mergedArray[k] = arr2[j];
            j++;
        }
        k++;
    }
 
    while (i < size1) {
        mergedArray[k] = arr1[i];
        i++;
        k++;
    }
 
    while (j < size2) {
        mergedArray[k] = arr2[j];
        j++;
        k++;
    }
 
    return mergedArray;
}



    
int main(){
    int size1, size2;
    int* dynamic1=NULL;
    int* dynamic2=NULL;

    printf("How big is the first array: ");
    scanf("%d", &size1);

    dynamic1 = (int*)malloc(size1*sizeof(int));

    printf("Type in elements of first array!\n");
    for (int i = 0; i < size1; i++){
        printf("Element %d: ", i+1);
        scanf("%d", &dynamic1[i]);
        printf("\n");
    }

    printf("How big is the second array: ");
    scanf("%d", &size2);

    dynamic2 = (int*)malloc(size2*sizeof(int));

    printf("Type in elements of second array!\n");
    for (int i = 0; i < size2; i++){
        printf("Element %d: ", i+1);
        scanf("%d", &dynamic2[i]);
        printf("\n");
    }

    int* mergedArray = sortArray(dynamic1, dynamic2, size1, size2);

    printf("The new merged array is: ");
    for (int i = 0; i < size1 + size2; i++){
        printf("%d ", mergedArray[i]);
    }
    printf("\n");
    free(mergedArray);
    free(dynamic1);
    free(dynamic2);
    return 0;
    




}

