#include<stdio.h>
int main(){
    int a ;
    int b ;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    // int temp = a;
    // a = b;
    // b = temp;
    a = a+b;       // without using the third variable. 
    b = a-b;
    a = a-b;
    printf("First number is %d\n",a);
    printf("Second number is %d\n",b);
    return 0;
}