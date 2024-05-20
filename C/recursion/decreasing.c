#include<stdio.h>
int decrease(int a){
    if (a==0) return 0; 
    printf("%d ",a);
    decrease(a-1);    
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int decr = decrease(n);
    return 0;
}