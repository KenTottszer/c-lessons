#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int compare(const void *a, const void *b) {
    int int_a = *((int*)a);
    int int_b = *((int*)b);
    return int_b - int_a; // For descending order
}

int main() {
    int capacity = 10;
    int *numbers = malloc(capacity * sizeof(int));
    if (numbers == NULL) {
        fprintf(stderr, "Failed to allocate memory");
        return 1;
    }

    int count = 0;
    printf("Enter integers (non-integer to stop):\n");
    while (true) {
        int num;
        if (scanf("%d", &num) != 1) {
            break;
        }

        numbers[count++] = num;
        if (count >= capacity) {
            capacity *= 2;
            numbers = realloc(numbers, capacity * sizeof(int));
            if (numbers == NULL) {
                perror("Failed to reallocate memory");
                return 1;
            }
        }
    }

    qsort(numbers, count, sizeof(int), compare);

    printf("Sorted in descending order:\n");
    for (int i = 0; i < count; i++) {
        printf("%d\n", numbers[i]);
    }

    free(numbers);
    return 0;
}