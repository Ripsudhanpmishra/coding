#include<stdio.h>
int increase(int x, int a){
    if (x>a) return 0; 
    printf("%d ",x);
    increase(x+1,a);    
}
int main(){
    int n;
    int x =1;
    printf("Enter a number: ");
    scanf("%d",&n);
    increase(x,n);
    return 0;
}