#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef enum{
    INT_TYPE,
    CHAR_TYPE,
    STRING_TYPE,
    FLOAT_TYPE
}DataType;

typedef union{
    int number;
    char character;
    float floaty;
    char string[50];
}Data;

typedef struct list{
    DataType type;
    Data data;
    struct list* next;
}list;

list* createNode(DataType type, const void* element){
    list* newNode = (list*)malloc(sizeof(list));
    if (newNode == NULL){
        fprintf(stderr, "Did not work\n");
        return NULL;
    }

    newNode->type = type;
    newNode->next = NULL;

    switch(type){

        case INT_TYPE: 
        newNode->data.number = *(int*)element;
        break;

        case CHAR_TYPE:
        newNode->data.character = *(char*)element;
        break;

        case FLOAT_TYPE:
        newNode->data.floaty = *(float*)element;
        break;

        case STRING_TYPE:
        strncpy(newNode->data.string, (char*)element, 49);
        newNode->data.string[49] = '\0';
        break;

        default: 
        fprintf(stderr, "Invalid data type\n");
        free(newNode);
        return NULL;
    }   
    return newNode;
    
}

void addFirst (){

}


