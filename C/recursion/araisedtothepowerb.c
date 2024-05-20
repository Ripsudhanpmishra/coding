#include<stdio.h>
int ex(int a,int b){
    if(b==0) return 1;
    return a*ex(a,b-1);
}
int main(){
    int a;
    printf("Enter base: ");
    scanf("%d",&a);
    int b;
    printf("Enter power: ");
    scanf("%d",&b);
    int power = ex(a,b);
    printf("The value of %d raised to the power %d is: %d",a,b,power);
    return 0;
}