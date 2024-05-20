#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array element: ");
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Original array: ");
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(i%2==0) arr[i] = arr[i]+10;
        else arr[i] = arr[i]*2;
    }
    printf("\nRequired array: ");
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}