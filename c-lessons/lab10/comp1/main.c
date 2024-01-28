#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char* x = NULL;
    x = (char*)malloc(1*sizeof(char));
    
    if (x==NULL){
    printf("ERRRROR");
    return 1;

    }
    strcpy(x, "funnyuashdkajsdhaskjhdkashd");
  x = (char*)realloc(x, 20*sizeof(char));

    if (x==NULL){
        free(x);
        printf("ERRRROR");
        return 1;
    }
    strcat(x, " cunt!");
    

    
  
    printf("%s\n", x);
    free(x);
    return 0;
}   

 
