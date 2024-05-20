#include <stdio.h>

void sort(int n, int* ptr) {
    int i, j, t;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(ptr + j) < *(ptr + i)) {
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
}

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int* ptr = arr;

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    sort(n, ptr);

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    return 0;
}
