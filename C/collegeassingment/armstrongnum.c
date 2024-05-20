#include<stdio.h>
int main(){
    int i,n,num,r,sum;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("\nArmstrong numbers are: ");
    for (int i = 1; i <= num; i++);
    {
        sum = 0;
        n = i;
        while (n>0)
        {
            r = n%10;
            sum = sum+(r*r*r);
            n = n/10;
        }
        if (i==sum)
        {
            printf("%d\t",i);
        }   
    }
    return 0;
}