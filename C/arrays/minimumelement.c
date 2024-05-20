#include<stdio.h>
#include<limits.h>
int main(){
    int size;
    puts("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    for (int i = 0; i < size; i++){
        if(min>arr[i])
        min = arr[i];
    }
    printf("minimum in all element is %d",min);
    return 0;
}