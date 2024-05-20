#include<stdio.h>
int main(){
    for(int i=0; i<=100; i++)
    {
        if(i%2!=0)
        continue; // it is used to skip the particular round in which the condition is satisfy.
    printf("%d ",i);
    }
    return 0;
}