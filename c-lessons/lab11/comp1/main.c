#include <stdio.h>
#include <stdlib.h>

int main(){
   FILE *inputFile;
   char ch;
   inputFile = fopen("comp1.txt", "r");

   if(inputFile==NULL){
    printf("Error accessing the file\n");
    return 1;}

    while ((ch = fgetc(inputFile))!= EOF){
        putchar(ch);
    }
    printf("\n");
    fclose(inputFile);
    return 0;



}