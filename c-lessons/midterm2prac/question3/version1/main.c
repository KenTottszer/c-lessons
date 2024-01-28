#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[101];
    int isMan;
    int workedYears;
    int age;
    int numOfChildren;
} Worker;

typedef struct ListNode {
    Worker worker;
    struct ListNode *next;
} ListNode;

void addIfEligible(ListNode **head, Worker worker) {
     int eligible = (worker.isMan && worker.age >= 65) || (!worker.isMan && worker.workedYears + worker.numOfChildren * 2 >= 40);
    if (eligible) {
        ListNode *newNode = (ListNode*)malloc(sizeof(ListNode));
        if (newNode == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            exit(EXIT_FAILURE);
        }
        newNode->worker = worker;
        newNode->next = *head;
        *head = newNode;
    }
}

void freeList(ListNode *head) {
    ListNode *tmp;
    while (head != NULL) {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}

void readAndCreateList(const char *filename, ListNode **list) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }
    Worker tempWorker;
    while (fscanf(file, "%100s %d %d %d %d", tempWorker.name, &tempWorker.isMan, &tempWorker.workedYears, &tempWorker.age, &tempWorker.numOfChildren) == 5) {
        addIfEligible(list, tempWorker);
    }
    fclose(file);
}

void writeToFile(const char *filename, ListNode *list) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    for (ListNode *current = list; current != NULL; current = current->next) {
        fprintf(file, "%s %d %d %d\n", current->worker.name, current->worker.isMan, current->worker.workedYears, current->worker.age);
    }

    fclose(file);
}

void sortList(ListNode **head) {
    int swapped;
    ListNode *ptr1;
    ListNode *lptr = NULL;

    if (*head == NULL){ 
        return;
    }

    do {
        swapped = 0;
        ptr1 = *head;

        while (ptr1->next != lptr) {
            if (ptr1->worker.age < ptr1->next->worker.age) {
                Worker temp = ptr1->worker;
                ptr1->worker = ptr1->next->worker;
                ptr1->next->worker = temp;
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}

int main() {

    ListNode *eligibleList = NULL;
    readAndCreateList("workers.txt", &eligibleList);
    sortList(&eligibleList);
    writeToFile("retirees.txt", eligibleList);
    freeList(eligibleList);
    return 0;

}
