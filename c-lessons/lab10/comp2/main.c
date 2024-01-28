#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *x = NULL;
    char *y = NULL;
    char *concatenated = NULL;

    x = (char *)malloc(100 * sizeof(char));
    if (x == NULL) {
        return 1;
    }

    printf("Enter first string (up to 99 characters): ");
    scanf("%99s", x);

    y = (char *)malloc(100 * sizeof(char));
    if (y == NULL) {
        free(x);
        return 1;
    }

    printf("Enter second string (up to 99 characters): ");
    scanf("%99s", y);

    concatenated = (char *)malloc((strlen(x) + strlen(y) + 1) * sizeof(char));
    if (concatenated == NULL) {
        free(x);
        free(y);
        return 1;
    }

    strcpy(concatenated, x);
    strcat(concatenated, y);

    printf("Concatenated string: %s\n", concatenated);

    free(x);
    free(y);
    free(concatenated);

    return 0;
}
