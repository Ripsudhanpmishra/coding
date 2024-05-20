#include<stdio.h>
int main(){
   int n;
    printf("Enter the number of rows(+1): ");
    scanf("%d",&n);
    int nsp = 1;
    int nst = n;
    int x = 1;
    int b = n;
    for (int q = 1; q <= (2*n)+1; q++)
    {
    printf("%d",x);
    if(q<=(n)) x++;
    else x--;
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= nst; j++)
        {
        printf("%d",a);
        a++;
        }
        for (int k = 1; k <= nsp; k++)
        {
        printf(" ");
        a++;
        }
        for (int l = 1; l <= nst; l++)
        {
        printf("%d",b);
        b--;
        }
        int b = n;
        n = n--;
        nst--;
        nsp = nsp+2;
        printf("\n");
    }
    return 0;
}