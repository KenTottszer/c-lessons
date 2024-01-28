#include<stdio.h>
#include<stdlib.h>


int* addElement(int* array, int element, int* size){
    *size += 1;
    array = (int*)realloc(array, (*size) * sizeof(int));
    if(array == NULL){
        fprintf(stderr, "Memmory allocation failed");
        return NULL;
    }
    array[(*size)-1] = element;
    return array;
}

int* deleteElement(int* array, int element, int* size) {
    int found = 0;
    for (int i = 0; i < *size; i++) {
        if (array[i] == element) {
            found = 1;
            // Shift elements to the left to fill the gap
            for (int j = i; j < *size - 1; j++) {
                array[j] = array[j + 1];
            }
            *size -= 1;
            break;
        }
    }
    if (found) {
        // Reallocate the array to the new size
        array = (int*)realloc(array, (*size) * sizeof(int));
        if (array == NULL && *size > 0) {
            fprintf(stderr, "Memory reallocation failed\n");
            return NULL;
        }
    }

    return array;
}

char* removeCharC(const char* str) {
    int len = strlen(str);
    char* newStr = malloc(len + 1); // Allocate memory for the new string
    if (newStr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return NULL;
    }

    int j = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] != 'c') {
            newStr[j++] = str[i]; // Copy character if it's not 'c'
        }
    }
    newStr[j] = '\0'; // Null-terminate the new string

    return newStr;
}



int main(){
    const char* originalStr = "Hello how are you charlie chico";
    char* modifiedStr = removeCharC(originalStr);

    if (modifiedStr != NULL) {
        printf("Modified String: %s\n", modifiedStr);
        free(modifiedStr); // Free the allocated memory
    }

    return 0;

    

}