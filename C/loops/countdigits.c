#include<stdio.h>
int main (){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    int i = 0;
    while (x!=0)
    {
    x=x/10;
    i++; // i = i+1;
    }
    printf("The number of digits is: %d",i);
    return 0;
}