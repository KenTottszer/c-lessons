#include <stdio.h>
#include <stdlib.h>

// Function to add an element to an array
int* addElement(int* array, int element, int* size) {
    *size += 1;
    array = (int*)realloc(array, (*size) * sizeof(int));
    if (array == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    array[*size - 1] = element;
    return array;
}

// Function to remove an element from an array
int* removeElement(int* array, int index, int* size) {
    if (index < 0 || index >= *size) {
        printf("Index out of bounds\n");
        return array;
    }
    for (int i = index; i < *size - 1; i++) {
        array[i] = array[i + 1];
    }
    *size -= 1;
    array = (int*)realloc(array, (*size) * sizeof(int));
    return array;
}

// Function to repeat every odd element in an array
int* repeatOddElements(int* array, int size, int* newSize) {
    *newSize = size;
    for (int i = 0; i < size; i++) {
        if (array[i] % 2 != 0) {
            *newSize += 1;
        }
    }
    int* newArray = (int*)malloc(*newSize * sizeof(int));
    if (newArray == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    for (int i = 0, j = 0; i < size; i++, j++) {
        newArray[j] = array[i];
        if (array[i] % 2 != 0) {
            newArray[++j] = array[i];
        }
    }
    return newArray;
}

int main() {
    int size = 5;
    int* array = (int*)malloc(size * sizeof(int));
    if (array == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    // Initialize array
    for (int i = 0; i < size; i++) {
        array[i] = i + 1; // 1, 2, 3, 4, 5
    }

   
    // Repeat odd elements
    int newSize = 0;
    int* newArray = repeatOddElements(array, size, &newSize);
    for (int i = 0; i < newSize; i++) {
        printf("%d ", newArray[i]);
    }
    printf("\n");
    free(array);
    free(newArray);
    return 0;
}