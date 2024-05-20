#include<stdio.h>
int fibonacci(int x){
    int a=1, b=1, sum=1; 
    for (int i = 1; i <=x-2; i++)
    {
    sum = a+b;
    a=b;
    b=sum;
    }
    return sum;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("First %d fibonacci numbers are: ",n);
    for(int j = 1; j <= n; j++){
    int fibo = fibonacci(j);
    printf("%d ",fibo);
    }
    return 0;
}