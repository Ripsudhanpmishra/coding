#include<stdio.h>
int main(){
    int n, i, j;
    
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements");
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++) {
        int count = 0;
        for(j=i+1; j<n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                break;
            }
        }
         if(count==0) printf("%d ",arr[i]);
    }
    return 0;
}