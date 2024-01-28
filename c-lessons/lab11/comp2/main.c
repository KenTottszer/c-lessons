
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE* inputFile, *outputFile;
    char ch;
    int lines = 0, characters = 0, words = 0;
    int inWord = 0;
    inputFile = fopen("input.txt", "r");

    if(inputFile ==NULL){
        printf("Error in processing the file");
        return 1;
    }

    while((ch  = fgetc(inputFile)) != EOF){
        characters ++;
        if (ch == '\n'){
            lines++;
        }
        if(ch == ' ' || ch == '\n' || ch == '\t'){
            inWord = 0;
        } else if(inWord == 0){
            inWord = 1;
            words++;
        }
    }

    fclose(inputFile);
    
    outputFile = fopen("output.txt", "w");
    
    if(outputFile ==NULL){
        printf("Error in processing the file");
        return 1;
    }

    fprintf(outputFile, "lines %d\ncharacters %d\nwords %d\n", lines, characters, words);

    fclose(outputFile);

    outputFile = fopen("output.txt", "r");

    if(outputFile ==NULL){
        printf("Error in processing the file");
        return 1;
    }

    fscanf(outputFile, "%d %d %d", &lines, &characters, &words);
    printf("LINES %d\nCHARACTERS %d\nWORDS %d\n", lines, characters, words);
    fclose(outputFile);
    return 0;
}