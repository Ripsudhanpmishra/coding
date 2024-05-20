#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Function prototypes
void insertAtBeginning(int data);
void insertAtEnd(int data);
void insertAtLocation(int data, int position);
void insertAfterElement(int data, int element);
void displayForward();
void displayReverse();

int main() {
    int choice, data, position, element;

    do {
        printf("\n\nMenu\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at a given location\n");
        printf("4. Insert after a specific element\n");
        printf("5. Display elements from beginning to end\n");
        printf("6. Display elements from end to beginning\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter the data to be inserted: ");
                scanf("%d", &data);
                insertAtBeginning(data);
                break;
            case 2:
                printf("Enter the data to be inserted: ");
                scanf("%d", &data);
                insertAtEnd(data);
                break;
            case 3:
                printf("Enter the data to be inserted: ");
                scanf("%d", &data);
                printf("Enter the position: ");
                scanf("%d", &position);
                insertAtLocation(data, position);
                break;
            case 4:
                printf("Enter the data to be inserted: ");
                scanf("%d", &data);
                printf("Enter the element after which to insert: ");
                scanf("%d", &element);
                insertAfterElement(data, element);
                break;
            case 5:
                displayForward();
                break;
            case 6:
                displayReverse();
                break;
            case 7:
                printf("Exiting...");
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    } while(choice != 7);

    return 0;
}

void insertAtBeginning(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    printf("Element inserted at the beginning successfully.\n");
}

void insertAtEnd(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    printf("Element inserted at the end successfully.\n");
}

void insertAtLocation(int data, int position) {
    if (position < 1) {
        printf("Invalid position.\n");
        return;
    }

    if (position == 1) {
        insertAtBeginning(data);
        return;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    struct Node* temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range.\n");
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    printf("Element inserted at position %d successfully.\n", position);
}

void insertAfterElement(int data, int element) {
    struct Node* temp = head;
    while (temp != NULL && temp->data != element) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Element not found.\n");
        return;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = temp->next;
    temp->next = newNode;
    printf("Element inserted after %d successfully.\n", element);
}

void displayForward() {
    struct Node* temp = head;
    printf("Elements from beginning to end: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

/**
 * The function displays the elements of a linked list in reverse order.
 * 
 * @return void, which means it does not return any value.
 */
void displayReverse() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* nextNode = NULL;

    printf("Elements from end to beginning: ");
    while (current != NULL) {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    while (prev != NULL) {
        printf("%d ", prev->data);
        prev = prev->next;
    }
    printf("\n");
}
