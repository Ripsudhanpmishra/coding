#include<stdio.h>
void sum(int a, int s){
    if(a==0){     
    printf("%d ",s);
    return;
    }
    sum(a-1,s+a);
    return;
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    sum(n,0);
 //   printf("The sum of %d numbers is: %d",n,add);
    return 0;
}