#include<stdio.h>
int main(){
    int size;
    puts("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    // int arr[4] = {2,4,6,8};
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum = sum+arr[i];
    }
    printf("Sum of all element is %d",sum);
    return 0;
}