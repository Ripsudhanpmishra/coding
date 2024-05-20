#include<stdio.h>
int main(){
    int x, n;
    printf("Enter a number: ");
    scanf("%d",&x);
    int sum = 0;
    while (x!=0)
    {
    n = x%10;
    // int a = n%2;
    if(n%2==0){
    //    printf("%d",a);
       sum = sum+n;
    }
        x = x/10;
    }
     printf("The sum of even digits of the number is: %d",sum);    
    return 0;
}