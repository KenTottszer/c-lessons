#include<stdio.h>
#include<stdlib.h>

typedef struct tree{
    int value;
    struct tree* left;
    struct tree* right;

}tree;

tree* createNode(int value){
    tree* newNode = (tree*)malloc(sizeof(tree));
    newNode->value = value;
    newNode->left = NULL;
    newNode->right= NULL;
    return newNode;
}


void inorderTraversal(tree* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->value);
        inorderTraversal(root->right);
    }

}

void preorderTraversal(tree* root) {
    
    if (root != NULL) {
        printf("%d ", root->value);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }

}

void postorderTraversal(tree* root) {
    if (root != NULL) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->value);
    }
}


int searchTree(tree* root, int value) {
    if (root == NULL) {
        return 0; 
    }
    if (root->value == value) {
        return 1; 
    }
    if (value < root->value) {
        return searchTree(root->left, value);
    } else {
        return searchTree(root->right, value);
    }
}

int findMinValue(tree* root){
     if (root == NULL) {
        printf("Error: Tree is empty.\n");
        return -1; 
    }
    while(root->left != NULL){
        root = root->left;
    }
    return root->value;
}

int findMaxValue(tree* root){
     if (root == NULL) {
        printf("Error: Tree is empty.\n");
        return -1; 
    }
    while(root->right != NULL){
        root = root->right;
    }
    return root->value;
}

void destroyTree(struct tree* root) {
    if (root != NULL) {
        destroyTree(root->left);
        destroyTree(root->right);
        free(root);
    }
}


int main(){
    tree* n1 = createNode(1);
    tree* n2 = createNode(2);
    tree* n3 = createNode(3);
    tree* n4 = createNode(4);
    tree* n5 = createNode(5);
    tree* n6 = createNode(6);
    tree* n7 = createNode(7);

    
    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    n3->left = n6;
    n3->right = n7;
    printf("\n\ninorder:\n");
    inorderTraversal(n1);
    printf("\n\npreorder:\n");
    preorderTraversal(n1);
    printf("\n\npostorder:\n");
    postorderTraversal(n1);
    printf("\n\n\n");

    int guess;
    printf("Enter a number to search: ");
    scanf("%d", &guess);

    if (searchTree(n1, guess)) {
        printf("Number %d is found in the tree.\n", guess);
    } else {
        printf("Number %d is not found in the tree.\n", guess);
    }
   
    int minValue = findMinValue(n1);
    if (minValue != -1) {
        printf("Minimum value in the tree is: %d\n", minValue);
    }

    int maxValue = findMaxValue(n1);
    if (minValue != -1) {
        printf("Minimum value in the tree is: %d\n", maxValue);
    }


    destroyTree(n1);



return 0;

}