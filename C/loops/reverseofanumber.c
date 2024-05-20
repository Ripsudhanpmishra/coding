#include<stdio.h>
int main(){
    long long int x;
    printf("Enter a number: ");
    scanf("%lld",&x);
    long long int n=0;
    long long int y=x;
    while (x!=0)
    {
    n = n*10;
    n = n+(x%10);
    x = x/10;
    }
    printf("The reverse of the number is: %lld",n);
    long long int sum;
    sum = (y+n);
    printf("\nThe sum of number and its reverse is %lld",sum); 
    return 0;
}   