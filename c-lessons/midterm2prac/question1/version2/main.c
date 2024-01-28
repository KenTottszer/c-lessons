

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef enum {
    CHAR_TYPE,
    INT_TYPE,
    FLOAT_TYPE,
    STRING_TYPE
} DataType;

typedef union {
    char character;
    int number;
    float floaty;
    char string[50];
} Data;

typedef struct btree{
    Data data;
    DataType type;
    struct btree* left;
    struct btree* right;
}btree;



btree* createNode(DataType type, const void* mem){
    btree* newNode = (btree*)malloc(sizeof(btree));
    if (newNode == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return NULL;
    }

    newNode->type = type;
    newNode->left = NULL;
    newNode->right = NULL;

    switch (type){
    case CHAR_TYPE:
            newNode->data.character = *(char*)mem;
            break;
        case INT_TYPE:
            newNode->data.number = *(int*)mem;
            break;
        case FLOAT_TYPE:
            newNode->data.floaty = *(float*)mem;
            break;
        case STRING_TYPE:
            strncpy(newNode->data.string, (char*)mem, 49);
            newNode->data.string[49] = '\0'; 
            break;
        default:
            fprintf(stderr, "Invalid data type\n");
            free(newNode);
            return NULL;
    }
    return newNode;
}


void inorderTraverse(btree* root){
    if (root != NULL){
        inorderTraverse(root->left);
        if (root->type == CHAR_TYPE)
        printf("%c ", root->data.character);
        if (root->type == INT_TYPE)
        printf("%d ", root->data.number);
        if (root->type == FLOAT_TYPE)
        printf("%f ", root->data.floaty);
         if (root->type == STRING_TYPE)
        printf("%s ", root->data.string);
        inorderTraverse(root->right);
    }
   
}


void destroyElement(){

}

int search(btree* root, int value) {
    if (root == NULL){  
        return 0;
    }
    if (root->data.number == value){
        return 1;
    }else{
        return search(root->left, value) || search(root->right, value);
    }
       
    }


void printDescending(btree* root) {
    if (root != NULL) {
        printDescending(root->right);
        if (root->type == INT_TYPE) 
            printf("%d ", root->data.number);
        if (root->type == CHAR_TYPE)
            printf("%c ", root->data.character);
        if (root->type == FLOAT_TYPE)
            printf("%f ", root->data.floaty);
        if (root->type == STRING_TYPE)
            printf("%s ", root->data.string);
        printDescending(root->left);
    }
}



int main(){
    char c = 'A';
    int i = 1;
    float f = 3.3;
    char s[50]={"Hello"};
    


    btree* mem1 = createNode(CHAR_TYPE, &c);
    printf("MEM1 is: %c\n", mem1->data.character);
    btree* mem2 = createNode(INT_TYPE, &i);
    printf("MEM2 is: %d\n", mem2->data.number);
    btree* mem3 = createNode(FLOAT_TYPE, &f);
    printf("MEM3 is: %f\n", mem3->data.floaty);
    btree* mem4 = createNode(STRING_TYPE, s);
    printf("MEM4 is: %s\n", mem4->data.string);
    

    mem1->left = mem2;
    mem1->right = mem3;
    mem3->left = mem4;

    printf("\n\n");
    printf("         A\n");
    printf("        /\\\n");
    printf("       /  \\\n");
    printf("      1     3.30\n");
    printf("            /\n");
    printf("         Hello\n");



    printf("\n\n\n");
   
    printf("\n\n\n");

    int result= search(mem1, 2);
    if(result == 1){
        printf("\n\nYES\n\n");
    }
    else if(result == 0){
        printf("\n\nNO\n\n");
    } 


    printDescending(mem1);
    printf("\n\n\n");
    return 0;
}