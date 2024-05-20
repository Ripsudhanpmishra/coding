#include<stdio.h>
int main(){
    float x;
    printf("Enter your Real Number:");
    scanf("%f",&x);
    int y = x; 
    // printf("%d",y);
    float z = x-y;
    printf("The fractional part of number is:%f",z);
    return 0;
}