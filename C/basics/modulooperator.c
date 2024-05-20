#include<stdio.h>
int main(){
    int x,y;
    printf("Enter divisor:");
    scanf("%d",&x);
    printf("Enter divident:");
    scanf("%d",&y);
    int a = y%x;
    printf(" Your reminder is :%d",a);
    return 0;
}