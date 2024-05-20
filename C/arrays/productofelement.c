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
    int product = 1;
    for (int i = 0; i < size; i++){
        product = product*arr[i];
    }
    printf("Product of all element is %d",product);
    return 0;
}