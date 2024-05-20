#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int group1[MAX_SIZE], group2[MAX_SIZE], group3[MAX_SIZE], group4[MAX_SIZE];
    int size1 = 0, size2 = 0, size3 = 0, size4 = 0;
    int num, i;

    printf("Enter numbers (enter -1 to stop):\n");
    while (scanf("%d", &num) && num != -1) {
        if (num < 10) {
            group1[size1++] = num;
        } else if (num < 20) {
            group2[size2++] = num;
        } else if (num < 30) {
            group3[size3++] = num;
        } else {
            group4[size4++] = num;
        }
    }

    printf("\nGroup 1: Less than 10\n");
    for (i = 0; i < size1; i++) {
        printf("%d ", group1[i]);
    }

    printf("\nGroup 2: Between 10 and 19\n");
    for (i = 0; i < size2; i++) {
        printf("%d ", group2[i]);
    }

    printf("\nGroup 3: Between 20 and 29\n");
    for (i = 0; i < size3; i++) {
        printf("%d ", group3[i]);
    }

    printf("\nGroup 4: 30 and greater\n");
    for (i = 0; i < size4; i++) {
        printf("%d ", group4[i]);
    }

    return 0;
}
