#include<stdio.h>
int main(){
    int size;
    
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int a[size];
    printf("Enter array elements");
    for (int i = 0; i < size; i++){
        scanf("%d",&a[i]);
    }
    for (int j = 0; j < size; j++){
        int freq = 0;
        for (int k = 0; k < size; k++)
        {
            if(a[k]==a[j]) freq++;
        }
        printf("The frequency of %d is %d",a[j],freq);
        printf("\n");
    }
    
    return 0;
}