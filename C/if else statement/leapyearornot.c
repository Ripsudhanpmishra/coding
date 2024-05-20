#include<stdio.h>
int main(){
    int x;
    printf("Enter Year:");
    scanf("%d",&x);
    if (x%4==0)
    {
    printf("This year is a leap year.");
    }
    else
    {
        printf("This year is not a leap year.");
    }
    return 0;
}