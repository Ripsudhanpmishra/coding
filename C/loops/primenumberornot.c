#include<stdio.h>
int main (){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
      if (n==2)
         {
         printf("The number is smallest prime number.");
         }
    for (int i = 2; i <=n-1; i++)
    {   if (n%i==0)
       {
        printf("The given number is composite.");
        break; // break is used to stop repetation of loops.
       }
       else{
        printf("The given number is prime.");
        break;
       }
    }      
    return 0;
}