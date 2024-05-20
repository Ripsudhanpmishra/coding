#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows(+1): ");
    scanf("%d",&n);
    int nsp = 1;
    int nst = n;
    for (int q = 1; q <= (2*n)+1; q++)
    {
    printf("*");
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
        printf("*");
        }
        for (int k = 1; k <= nsp; k++)
        {
        printf(" ");
        }
        for (int l = 1; l <= nst; l++)
        {
        printf("*");
        }
        nst--;
        nsp = nsp+2;
        printf("\n");
    }
    return 0;
}
//   *******
//   *** ***
//   **   **
//   *     *