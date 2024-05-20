#include <stdio.h>
int factorial(int a){
    int p = 1;
    for (int i = 1; i <= a; i++)
    {
    p = i*p; 
    }
    return p;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int j = 1; j <= n; j++)
    {
        int jfact = factorial(j);
        printf("The factorial of %d is: %d\n",j,jfact); 
    }
    return 0;
}