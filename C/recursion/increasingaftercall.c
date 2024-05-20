#include<stdio.h>
int increase(int a){
    if (a==0) return 0; 
    increase(a-1);   
    printf("%d\n",a); 
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int incr = increase(n);
    return 0;
}