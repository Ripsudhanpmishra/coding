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
    int x,count=0;
    printf("Enter the number for the comparison: ");
    scanf("%d",&x);
    for (int i = 0; i < n; i++)
    {
        if(x<arr[i]) count++;
    }
    printf("Number of element greater then the the given number is :%d",count);    
    return 0;
}