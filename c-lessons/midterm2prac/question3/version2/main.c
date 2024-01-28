#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PLATE_NUM_SIZE 7 // 6 characters for plate number + 1 for null terminator
#define TYPE_SIZE 31     // 30 characters for type + 1 for null terminator

typedef struct {
    char plateNumber[PLATE_NUM_SIZE];
    char type[TYPE_SIZE];
    int milesRun;
} Car;

typedef struct ListNode {
    Car car;
    struct ListNode *next;
} ListNode;



// Function to create a new node
ListNode* createNode(Car car) {
    ListNode *newNode = (ListNode*)malloc(sizeof(ListNode));
    if (!newNode) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    newNode->car = car;
    newNode->next = NULL;
    return newNode;
}

// Function to add a car to a list
void addToList(ListNode **head, Car car) {
    ListNode *newNode = createNode(car);
    newNode->next = *head;
    *head = newNode;
}

// Function to read cars from a file and create a list
void readFromFile(const char *filename, ListNode **list) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    Car tempCar;
    while (fscanf(file, "%6s %30[^\n] %d ;;", tempCar.plateNumber, tempCar.type, &tempCar.milesRun) == 3) {
        addToList(list, tempCar);
    }

    fclose(file);
}

// Function to find common cars and create a new list
ListNode* findCommonCars(ListNode *list1, ListNode *list2) {
    ListNode *commonList = NULL;
    for (ListNode *ptr1 = list1; ptr1 != NULL; ptr1 = ptr1->next) {
        for (ListNode *ptr2 = list2; ptr2 != NULL; ptr2 = ptr2->next) {
            if (strcmp(ptr1->car.plateNumber, ptr2->car.plateNumber) == 0) {
                addToList(&commonList, ptr1->car);
            }
        }
    }
    return commonList;
}


// Function to write the list of common cars to a file
void writeToFile(const char *filename, ListNode *list) {
    FILE *file = fopen(filename, "w");
    if (!file) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    for (ListNode *current = list; current != NULL; current = current->next) {
        fprintf(file, "%s %s %d ;;\n", current->car.plateNumber, current->car.type, current->car.milesRun);
    }

    fclose(file);
}

// Function to free the list
void freeList(ListNode *head) {
    ListNode *tmp;
    while (head != NULL) {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}

int main() {
    ListNode *list1 = NULL, *list2 = NULL;

    readFromFile("db1.txt", &list1);
    readFromFile("db2.txt", &list2);

    ListNode *commonCars = findCommonCars(list1, list2);
    writeToFile("common_cars_db.txt", commonCars);

    freeList(list1);
    freeList(list2);
    freeList(commonCars);

    return 0;
}
