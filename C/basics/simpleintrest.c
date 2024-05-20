#include <stdio.h>
int main(){
    float p,r,t,si; // principal, rate, time and simple intrest 
    printf("Enter Principal:");
    scanf("%f",&p);
    printf("Enter Rate:");
    scanf("%f",&r);
    printf("Enter Time:");
    scanf("%f",&t);
    si = (p*r*t)/100; // simple intrest 
    printf("simple intrest is : %f",si);
    return 0;
}