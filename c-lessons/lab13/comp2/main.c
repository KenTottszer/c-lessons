#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

node* createNode(int data){
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void addFirst(node** head, int data){
    node* newNode = createNode(data);
    newNode->next= *head;
    *head = newNode;
}

void printList(node* head){
    node* current = head;
    while (current != NULL){
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void deleteNode(node** head, int data){
    if (*head==NULL){
        printf("This list is empty\n");
    }
   node* current = *head;
   node* prev = NULL;

   while (current != NULL && current->data != data) {
        prev = current;
        current = current->next;
    }
 
    if (current != NULL) {
        if (prev != NULL) {
            prev->next = current->next;
        } else {
            *head = current->next;
        }
        free(current);
        printf("Node with value %d deleted from the linked list.\n", data);
    } else {
        printf("Node with value %d not found in the linked list.\n", data);
    }

}

int main(){
    node* head = NULL;
    addFirst(&head, 4);
    addFirst(&head, 3);
    addFirst(&head, 2);
    addFirst(&head, 1);

    printList(head);
    deleteNode(&head, 3);
      deleteNode(&head, 5);
    printList(head);

    return 0;
}