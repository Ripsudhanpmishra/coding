#include<stdio.h>
int main(){
    int a = 25;
    int* x = &a;
    printf("%d\n",a);
    printf("%p\n",&x);
    printf("%d\n",*x);
    return 0;
}