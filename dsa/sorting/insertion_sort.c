#include <stdio.h>

void insertionsort(int arr[], int n){
    int i,j,key;
    for(i=1; i<n; i++){
        key = arr[i];
        j=i-1;
        while (j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

}

void printArray(int arr[], int size) {
	int i;
    for (i=0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[]={1,7,3,6,4,5,9};
    int n=7;
    printArray(arr, n);
    insertionsort(arr, 7);
	printf("\n");
	printArray(arr, n);

    return 0;
}
