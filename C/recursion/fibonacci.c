#include<stdio.h>
int fibo(int n){
    if(n==1 || n==2) return 1;
    // int ans1 = fibo(n-1);
    // int ans2 = fibo(n-2);
    int recAns = fibo(n-1) + fibo(n-2);
    return recAns;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int x = fibo(n);
    printf("The %d fibonacci term is: %d",n,x);
    return 0;
}