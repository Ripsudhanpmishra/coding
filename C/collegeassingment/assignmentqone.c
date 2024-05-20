// #include <stdio.h>

// int main() {
//     // int arr[100], i, j, n, count = 0;
//     int n, count=0, i, j;
//     printf("Enter number of elements in the array : ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter elements in array : ");
//     for(i=0; i<n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     for(i=0; i<n; i++) {
//         for(j=i+1; j<n; j++) {
//             if(arr[i] == arr[j]) {
//                 count++;
//                 break;
//             }
//         }
//     }

//     printf("Total number of duplicate elements found in the array is : %d", count);

//     return 0;
// }
#include <stdio.h>

int main() {
    // int input_array[] = {1, 2, 3, 4, 2, 5, 6, 3, 7, 8, 9, 1};
    // int size = sizeof(input_array) / sizeof(input_array[0]);
    int size;
    printf("Entre size ");
    scanf("%d",&size);
    int frequency_counter[1000] = {0};  // Assuming array elements are integers
    int input_array[size];
    for (int i = 0; i < size; i++){
        scanf("%d",&input_array[i]);
    }
    
    printf("Duplicate elements: ");
    for (int i = 0; i < size; i++) {
        frequency_counter[input_array[i]]++;
        if (frequency_counter[input_array[i]] == 2) {
            printf("%d ", input_array[i]);
        }
    }

    printf("\nUnique elements: ");
    for (int i = 0; i < size; i++) {
        if (frequency_counter[input_array[i]] == 1) {
            printf("%d ", input_array[i]);
        }
    }

    return 0;
}
