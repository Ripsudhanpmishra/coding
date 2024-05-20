# include<stdio.h>
int main(){
    int x; 
    printf("Enter a number: ");
    scanf("%d",&x);
    int a=1, b=1, sum=1; 
    printf("First %d fibonacci number is: ",x);
    printf("1 1 ");
    for (int i = 1; i <=x-2; i++)
    {
    sum = a+b;
    a=b;
    b=sum;
    // printf("Fibonacci sequence till xth term: ");
    printf("%d ",sum);  /* code */
    }
    return 0;
}