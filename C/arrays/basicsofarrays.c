#include<stdio.h>
int main(){
    int arr[5], i;
    puts("Enter tne array elements: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Entered value is: ");
    for (int i = 0; i < 5; i++);
    {
        printf("%d",arr[i]);
    }
    // for (int i = 4; i >= 0; i--)              For reverse printing of array 
    // {
    //     printf("%d",arr[i]);
    // }
    return 0;
}