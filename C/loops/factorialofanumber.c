# include<stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    int p = 1;
    for (int i = 1; i <=x; i++)
    {
    p = i*p;    /* code */
    printf("The factorial of %d is: %d\n",i,p);
    }
    //printf("\nThe factorial of a given number is: %d",p);
    return 0;
}