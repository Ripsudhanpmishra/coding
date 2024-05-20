#include<stdio.h>
int main(){
    int a, b;
    printf("Enter the base: ");
    scanf("%d",&a);
    printf("Enter the exponent: ");
    scanf("%d",&b);
    int x = 1;
    for ( int i = 1; i <=b; i++)
    {
    x = x*a;    /* code */
    }
    printf("The value of expression is: %d",x);
    return 0;
}