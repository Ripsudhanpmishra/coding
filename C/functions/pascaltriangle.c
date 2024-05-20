#include<stdio.h>
int factorial(int a){
    int fact = 1;
    for (int i = 1; i <= a; i++){
        fact = fact*i;
    }
    return fact;
}
int combinations(int n, int r){
     int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n-r);
    int nCr = nfact/(rfact*nrfact);
    return nCr;
}
int main(){
    int n;
    printf("Enter the nuber one less then number of rows: ");
    scanf("%d",&n);
    int space = n;
    for (int i = 0; i <= n; i++)
    {
        for (int k = 1; k <= space; k++)
        {
        printf(" ");
        }
        
        for (int j = 0; j <= i; j++)
        {
        int a = combinations(i,j);
        printf("%d ",a);
        }
        space--;
        printf("\n"); 
    }
    return 0;
}