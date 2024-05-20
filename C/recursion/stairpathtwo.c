#include<stdio.h>
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 3;
    int totalways = stair(n-1)+ stair(n-2)+ stair(n-3);
    return totalways;
}                                                        // DryRun this code.//
int main(){
    int n;
    printf("Enter the number of stairs: ");
    scanf("%d",&n);
    int ways = stair(n);
    printf("Number of ways are: %d",ways++);
    return 0;
}