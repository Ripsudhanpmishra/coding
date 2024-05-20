#include<stdio.h>
int main(){
    int x;
    printf("Enter first number:");
    scanf("%d",&x);
    int y;
    printf("enter second number:");
    scanf("%d",&y);
    int z;
    printf("Enter third number:");
    scanf("%d",z);
    int w;
    printf("Enter fourth number:");
    scanf("%d",&w);
    if (x>y && x>z && x>w)
    {
    printf("%d is greatest ",x);
    }
    if (y>x && y>z && y>w)
    {
    printf("%d is greatest ",y);   
    }
    if (z>x && z>y && z>w)
    {
    printf("%d is greatest ",z);
    }
    if (w>x && w>y && w>z)
    {
    printf("%d is greatest ",w);    
    }
    return 0;
}