#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows(only odd numbers): ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i = i+2)
    {
        for (int j = 1; j <= n-i; j = j+2)
        {
        printf(" ");
        } 
        int a = 1;  
        for (int k = 1; k <= i; k = k+1)
        {
        printf("%d",a);
        a = a+1;
        }
        printf("\n");
    }
    return 0;
}