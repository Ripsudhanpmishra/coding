#include<stdio.h>
int factorial(int a){
    int fact = 1;
    for (int i = 1; i <= a; i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int r;
    printf("Enter r: ");
    scanf("%d",&r);
    #include<stdio.h>
int factorial(int a){
    int fact = 1;
    for (int i = 1; i <= a; i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int r;
    printf("Enter r: ");
    scanf("%d",&r);
    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n-r);
    int nCr = nfact/(rfact*nrfact);
    printf("The value of nCr is: %d",nCr);
    return 0;
}
    printf("The value of nCr is: %d",nCr);
    return 0;
}