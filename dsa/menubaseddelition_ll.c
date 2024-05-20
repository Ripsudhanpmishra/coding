#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(Node** head, int data) {
    Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void displayList(Node* head) {
    printf("Linked List: ");
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void deleteAtBeginning(Node** head) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

void deleteAtEnd(Node** head) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }
    Node* temp = *head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void deleteAtPosition(Node** head, int position) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    if (position == 1) {
        deleteAtBeginning(head);
        return;
    }
    Node* temp = *head;
    for (int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        printf("Position exceeds the length of the list.\n");
        return;
    }
    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    free(nodeToDelete);
}

void deleteAfterElement(Node** head, int value) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    Node* temp = *head;
    while (temp != NULL && temp->data != value) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        printf("Element not found or it is the last element.\n");
        return;
    }
    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    free(nodeToDelete);
}

int main() {
    Node* head = NULL;
    int choice, data, position, value;

    while (1) {
        printf("\n--- Menu ---\n");
        printf("1. Create a linked list\n");
        printf("2. Display the linked list\n");
        printf("3. Delete an element at the beginning\n");
        printf("4. Delete an element at the end\n");
        printf("5. Delete an element at the i-th position\n");
        printf("6. Delete an element after a specific element\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert at the beginning (-1 to end): ");
                while (1) {
                    scanf("%d", &data);
                    if (data == -1)
                        break;
                    insertAtBeginning(&head, data);
                }
                break;
            case 2:
                displayList(head);
                break;
            case 3:
                deleteAtBeginning(&head);
                break;
            case 4:
                deleteAtEnd(&head);
                break;
            case 5:
                printf("Enter the position to delete: ");
                scanf("%d", &position);
                deleteAtPosition(&head, position);
                break;
            case 6:
                printf("Enter the value after which you want to delete: ");
                scanf("%d", &value);
                deleteAfterElement(&head, value);
                break;
            case 7:
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
