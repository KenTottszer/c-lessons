#include <stdio.h>
 
void trim(char *source, char *goal) {
    int start = 0, end = 0;

    while (source[start] != '\0' && source[start] == ' ')
        start++;
    
    while (source[end] != '\0')
        end++;
    end--;
    while (end >= 0 && source[end] == ' ')
        end--;
   
    int i;
    for (i = 0; i <= end-start; i++)
        goal[i] = source[start+i];
    goal[i] = '\0';
}
int main(void) {
    char s1[100] = "      Hello whatsup?   ";
    char s2[100];
    
    trim(s1, s2);
    printf("[%s] [%s]\n", s1, s2);
 
    return 0;
}