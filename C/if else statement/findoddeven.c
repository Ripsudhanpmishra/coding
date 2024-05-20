#include<stdio.h>
int main(){
    int x;
    printf("Enter your number:");
    scanf("%d",&x);
    if (x%2==0)
    {
    printf("your number is even");  
    }
    // if (x%2!=0)
    // {
    // printf("your number is odd");    
    // }
    else
    {
        printf("your number is odd");
    }
    
    return 0;
}