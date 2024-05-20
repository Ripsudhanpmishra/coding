#include <stdio.h>
int main(){
    int a, b; 
    printf("Enter first NO. :");
    scanf("%d",&a);
    printf("Enter second No. :");
    scanf("%d",&b);
    int x = a/b;
    printf("%d",x);
    int y = a-b*x;
    printf("The reminder when %d is divided by %d :%d",a,b,y);
    return 0;
}