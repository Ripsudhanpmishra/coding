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
    int i=0, j=(n-1);
    while (i<=j){
        if(arr[i]==arr[j]){
            i++,j--;
        }
        else{
            printf("the array is not palendrome"); 
            break;
        }
    }
    printf("the array is palendrome");
    return 0;
}