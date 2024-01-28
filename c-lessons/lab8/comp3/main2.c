#include <stdio.h>
#include <stdlib.h>

int* mergeArrays(int* arr1, int size1, int* arr2, int size2) {
    int* mergedArray = (int*)malloc((size1 + size2) * sizeof(int));
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            mergedArray[k++] = arr1[i++];
        } else {
            mergedArray[k++] = arr2[j++];
        }
    }

    while (i < size1) {
        mergedArray[k++] = arr1[i++];
    }

    while (j < size2) {
        mergedArray[k++] = arr2[j++];
    }

    return mergedArray;
}

int main() {
    int size1, size2, i;
    
    // Input for first array
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    int* arr1 = (int*)malloc(size1 * sizeof(int));
    printf("Enter the elements of the first array:\n");
    for (i = 0; i < size1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // Input for second array
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    int* arr2 = (int*)malloc(size2 * sizeof(int));
    printf("Enter the elements of the second array:\n");
    for (i = 0; i < size2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    // Merging arrays
    int* mergedArray = mergeArrays(arr1, size1, arr2, size2);

    // Printing merged array
    printf("Merged Sorted Array: ");
    for (i = 0; i < size1 + size2; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    // Freeing allocated memory
    free(arr1);
    free(arr2);
    free(mergedArray);

    return 0;
}