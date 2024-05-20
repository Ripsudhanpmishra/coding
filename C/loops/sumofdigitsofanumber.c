#include <stdio.h>
int main(){
    int x, n;
    printf("Enter a number: ");
    scanf("%d",&x);
    int sum=0;
    while(x!=0){
       n = x%10;
       sum = sum+n;
       x = x/10;
    }
    printf("The sum of the digits of the given number is: %d",sum);
    return 0;
}