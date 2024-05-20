#include<stdio.h>
int main(){
int x;
printf("Enter your number");
scanf("%d",&x);
if (x%5==0)
{
printf("your number is divisible by 5");
}
else
{
   printf(" your number is not divisible by 5");
}
    return 0;
}