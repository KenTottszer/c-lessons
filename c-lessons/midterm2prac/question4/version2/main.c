#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LENGTH 100

// Comparison function for qsort, for ascending lexical order
int compare(const void *a, const void *b) {
    const char *str_a = *(const char**)a;
    const char *str_b = *(const char**)b;
    return strcmp(str_a, str_b);
}

int main() {
    int capacity = 10;
    char **strings = malloc(capacity * sizeof(char*));
    if (strings == NULL) {
        perror("Failed to allocate memory");
        return 1;
    }

    int count = 0;
    char temp[MAX_STRING_LENGTH];
    printf("Enter strings (non-string to stop):\n");
    while (scanf("%99s", temp) == 1 ) {
        if (strcmp(temp, "~") == 0) {
            break; // Terminate input on "~"
        }
        strings[count] = strdup(temp);
        if (strings[count] == NULL) {
            perror("Failed to duplicate string");
            return 1;
        }
        count++;
        if (count >= capacity) {
            capacity *= 2;
            strings = realloc(strings, capacity * sizeof(char*));
            if (strings == NULL) {
                perror("Failed to reallocate memory");
                return 1;
            }
        }
    }

    qsort(strings, count, sizeof(char*), compare);

    printf("Sorted in ascending lexical order:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", strings[i]);
        free(strings[i]); // Free each string
    }

    free(strings); // Free the array of pointers
    return 0;
}