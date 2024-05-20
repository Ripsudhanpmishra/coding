#include<stdio.h>
int main(){
    int n,sum1=0,sum2=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array element: ");
    for (int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i+=2){
        sum1 = sum1+arr[i];
    }
    for (int i = 1; i < n; i+=2){
        sum2 = sum2+arr[i];
    }
    int dif;
    if(sum1>sum2) dif = sum1-sum2;
    if(sum2>sum1) dif = sum2-sum1;
    printf("The difference btw the odd and even indices elements is: %d",dif);
    
    return 0;
}