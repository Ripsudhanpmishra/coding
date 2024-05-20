#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7] = {7,6,5,4,3,2,1};
    int n=7;
    // selection sort
    printf("Unsorted array:\n");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    for (int i = 0; i < n-1; i++){
        int min = INT_MAX;
        int minidx = -1;
        for (int j = i; j < n; j++){
            if(arr[j]<min){
                min = arr[j];
                minidx = j;
            }
        }
        if(minidx!=i){
            int temp = arr[i];
            arr[i] = arr[minidx];
            arr[minidx] = temp;
        }
    }
    printf("\nSorted array:\n");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}