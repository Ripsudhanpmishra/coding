// // // #include <stdio.h>

// // // #define MAX_SIZE 100

// // // int main() {
// // //     int group1[MAX_SIZE], group2[MAX_SIZE], group3[MAX_SIZE], group4[MAX_SIZE];
// // //     int size1 = 0, size2 = 0, size3 = 0, size4 = 0;
// // //     int num, i;

// // //     printf("Enter numbers (enter -1 to stop):\n");
// // //     while (scanf("%d", &num) && num != -1) {
// // //         if (num < 10) {
// // //             group1[size1++] = num;
// // //         } else if (num < 20) {
// // //             group2[size2++] = num;
// // //         } else if (num < 30) {
// // //             group3[size3++] = num;
// // //         } else {
// // //             group4[size4++] = num;
// // //         }
// // //     }

// // //     printf("\nGroup 1: Less than 10\n");
// // //     for (i = 0; i < size1; i++) {
// // //         printf("%d ", group1[i]);
// // //     }

// // //     printf("\nGroup 2: Between 10 and 19\n");
// // //     for (i = 0; i < size2; i++) {
// // //         printf("%d ", group2[i]);
// // //     }

// // //     printf("\nGroup 3: Between 20 and 29\n");
// // //     for (i = 0; i < size3; i++) {
// // //         printf("%d ", group3[i]);
// // //     }

// // //     printf("\nGroup 4: 30 and greater\n");
// // //     for (i = 0; i < size4; i++) {
// // //         printf("%d ", group4[i]);
// // //     }

// // //     return 0;
// // // }
// // #include <stdio.h>

// // void bubbleSort(int arr[], int n) {
// //     for (int i = 0; i < n-1; i++) {
// //         for (int j = 0; j < n-i-1; j++) {
// //             if (arr[j] > arr[j+1]) {
// //                 int temp = arr[j];
// //                 arr[j] = arr[j+1];
// //                 arr[j+1] = temp;
// //             }
// //         }
// //     }
// // }

// // void selectionSort(int arr[], int n) {
// //     for (int i = 0; i < n-1; i++) {
// //         int min_idx = i;
// //         for (int j = i+1; j < n; j++) {
// //             if (arr[j] < arr[min_idx]) {
// //                 min_idx = j;
// //             }
// //         }
// //         int temp = arr[min_idx];
// //         arr[min_idx] = arr[i];
// //         arr[i] = temp;
// //     }
// // }

// // void printArray(int arr[], int size) {
// //     for (int i=0; i < size; i++) {
// //         printf("%d ", arr[i]);
// //     }
// //     printf("\n");
// // }

// // int main() {
// //     int arr[100], n, choice;

// //     printf("Enter the number of elements in the array: ");
// //     scanf("%d", &n);

// //     printf("Enter the elements of the array: ");
// //     for (int i = 0; i < n; i++) {
// //         scanf("%d", &arr[i]);
// //     }

// //     printf("1. Bubble Sort\n2. Selection Sort\nEnter your choice: ");
// //     scanf("%d", &choice);

// //     switch(choice) {
// //         case 1:
// //             bubbleSort(arr, n);
// //             printf("Sorted array using Bubble Sort: \n");
// //             printArray(arr, n);
// //             break;
// //         case 2:
// //             selectionSort(arr, n);
// //             printf("Sorted array using Selection Sort: \n");
// //             printArray(arr, n);
// //             break;
// //         default:
// //             printf("Invalid choice\n");
// //     }

// //     return 0;
// // }
// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node* next;
// };

// struct Node* SortedMerge(struct Node* a, struct Node* b) {
//     struct Node* result = NULL;

//     if (a == NULL)
//         return(b);
//     else if (b == NULL)
//         return(a);

//     if (a->data <= b->data) {
//         result = a;
//         result->next = SortedMerge(a->next, b);
//     }
//     else {
//         result = b;
//         result->next = SortedMerge(a, b->next);
//     }
//     return(result);
// }

// void push(struct Node** head_ref, int new_data) {
//     struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
//     new_node->data  = new_data;
//     new_node->next = (*head_ref);
//     (*head_ref)    = new_node;
// }

// void printList(struct Node *node) {
//     while (node!=NULL) {
//         printf("%d ", node->data);
//         node = node->next;
//     }
// }

// int main() {
//     struct Node* res = NULL;
//     struct Node* a = NULL;
//     struct Node* b = NULL;

//     push(&a, 15);
//     push(&a, 10);
//     push(&a, 5);

//     push(&b, 20);
//     push(&b, 3);
//     push(&b, 2);

//     res = SortedMerge(a, b);

//     printf("Merged Linked List is: \n");
//     printList(res);

//     return 0;
// }
#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char arr[MAX];
    int top;
} Stack;

void init(Stack *s) {
    s->top = -1;
}

void push(Stack *s, char c) {
    if (s->top != (MAX - 1)) {
        s->arr[++(s->top)] = c;
    }
}

char pop(Stack *s) {
    if (s->top != -1) {
        return s->arr[(s->top)--];
    } else {
        return '\0';
    }
}

int isPalindrome(char str[]) {
    int length = strlen(str);
    Stack s;
    init(&s);

    int i;
    for (i = 0; i < length; i++) {
        push(&s, str[i]);
    }

    for (i = 0; i < length; i++) {
        if (str[i] != pop(&s)) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str[MAX];
    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
