#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;

}node;

node* createNode(int data){
    node* newNode =  (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;

}

void addFirst(node** head, int data){
    node* newNode = createNode(data);
    newNode->next= *head;
    *head = newNode;

}

void addLast(node** head, int data){
    node* newNode = createNode(data);
    if (*head==NULL){
        *head = newNode;
    }
    else{
        node* current = *head;
        while(current->next !=NULL){
        current = current->next;
        }
        current->next = newNode;
    }
    
}

void printList(node* head){
    node* current = head;
    while (current != NULL){
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int calculateLength(node* head){
     int count = 0;  
    node* current = head;
    while (current != NULL){
        count++;
        current = current->next;
    }
    return count;
}


int main(){
    node* head = NULL;

    addFirst(&head, 3);
    addFirst(&head, 2);
    addFirst(&head, 5); 

    addLast(&head, 7);

    printList(head);
    

    int length = calculateLength(head);
    printf("Length of linked list is: %d\n", length);

return 0;
}