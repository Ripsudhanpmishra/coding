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
    int x, count=0;
    printf("Provide a number: ");
    scanf("%d",&x);
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if(arr[i]+arr[j]==x) count++;
        }  
    }
    printf("The pair of elements are: %d",count);
    return 0;
}