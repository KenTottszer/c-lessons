#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char string[200];
    char substring[100];
    char* dynamic=NULL;
    
    printf("Type in a string: ");
    scanf("%199[^\n]",string);
    printf("\nType in a substring: ");
    scanf("%99[^\n]",substring);


    int length = strlen(string);

    dynamic = (char*)malloc((length+1)*sizeof(char));
    if (dynamic==NULL){
        return 1;
    }

    for (int i = 0; i < length; i++){
       dynamic[i] = string[length-1-i];
    }
    dynamic[length] = '\0'; 

    printf("Reversed string: %s\n", dynamic);
    free(dynamic);
    return 0;
    

}   