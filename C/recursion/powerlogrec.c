#include<stdio.h>
int powerlog(int a, int b){
    if(b==0) return 1;
    int x = powerlog(a,b/2);
    if (b%2==0) return x*x;
    else return x*x*a;
}
int main(){
    int a;
    printf("Enter base: ");
    scanf("%d",&a);
    int b;
    printf("Enter exponent: ");
    scanf("%d",&b);
    int apb = powerlog(a,b);
    printf("The value of %d to the power %d is: %d",a,b,apb);
    return 0;
}