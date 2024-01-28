#include <stdio.h>
#include <string.h>
 
void newSwap(char *in, char *out) {
    int i = strlen(in) - 1;
    int j = 0;
    while (i >= 0) {
        out[j] = in[i];
        ++j;
        --i;
    } 
    out[j] = '\0';
}
 
void swapped(char *str) {
    int length = strlen(str);
    for (int i = 0; i != length/2; ++i) {
        
        char temp = str[i];
        str[i] = str[length-1-i];
        str[length-1-i] = temp;
    }
}
 
int main(void) {
    char first[] = "hey there!";
    char second[20];

    newSwap(first, second);
    printf("[%s] [%s]\n", first, second);
    printf("[%s]\n", second);
    swapped(second);
    printf("[%s]\n", second);
 
    return 0;
}