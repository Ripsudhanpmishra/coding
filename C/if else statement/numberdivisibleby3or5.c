#include <stdio.h>
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if (x%5==0 && x%3==0)
    {
    printf(" The number is divisible by 3 or 5.");    /* code */
    }
    else
    {
        printf("The number is not divisble by 3 or 5.");
    }
    return 0;
}