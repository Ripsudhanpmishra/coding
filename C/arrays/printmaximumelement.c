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
    int max = arr[0];
    for (int i = 0; i < size; i++){
        if(max<arr[i]) 
        max = arr[i];
    }
    printf("maximum all element is %d",max);
    return 0;
}