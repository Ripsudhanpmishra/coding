#include <stdio.h>
#include <stdlib.h>

// Structure to represent a node in the linked list
struct Node {
    int data;
    struct Node *next;
};

// Structure to represent a stack
struct Stack {
    struct Node *top;
};

// Function to initialize a stack
void initialize(struct Stack *s) {
    s->top = NULL;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *s) {
    return (s->top == NULL);
}

// Function to push an element onto the stack
void push(struct Stack *s, int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = value;
    newNode->next = s->top;
    s->top = newNode;
}

// Function to pop an element from the stack
int pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow!\n");
        return -1;
    }
    struct Node *temp = s->top;
    int poppedValue = temp->data;
    s->top = temp->next;
    free(temp);
    return poppedValue;
}

// Function to peek the top element of the stack
int peek(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty!\n");
        return -1;
    }
    return s->top->data;
}

// Function to update the ith element from the top of the stack
void update(struct Stack *s, int index, int newValue) {
    if (isEmpty(s)) {
        printf("Stack is empty!\n");
        return;
    }
    struct Node *temp = s->top;
    while (index-- && temp != NULL) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Invalid index!\n");
        return;
    }
    temp->data = newValue;
}

// Function to display all elements of the stack
void display(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Stack elements:\n");
    struct Node *temp = s->top;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main() {
    struct Stack s;
    initialize(&s);
    char choice;
    int value, index, newValue;
    
    do {
        printf("\nMenu:\n");
        printf("a) CREATE\n");
        printf("b) PUSH\n");
        printf("c) POP\n");
        printf("d) PEEK\n");
        printf("e) UPDATE\n");
        printf("f) DISPLAY\n");
        printf("x) Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch(choice) {
            case 'a':
                initialize(&s);
                printf("Stack created.\n");
                break;
            case 'b':
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(&s, value);
                break;
            case 'c':
                printf("Popped value: %d\n", pop(&s));
                break;
            case 'd':
                printf("Top of stack: %d\n", peek(&s));
                break;
            case 'e':
                printf("Enter index of element to update (0 for top): ");
                scanf("%d", &index);
                printf("Enter new value: ");
                scanf("%d", &newValue);
                update(&s, index, newValue);
                break;
            case 'f':
                display(&s);
                break;
            case 'x':
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 'x');

    return 0;
}
