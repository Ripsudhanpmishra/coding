#include <stdio.h>
int factorial(int a){
    if(a==1 || a==0) return 1;
     int recAns = a*factorial(a-1);
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("The factorial of %d is: %d",n,fact);
    return 0;
}