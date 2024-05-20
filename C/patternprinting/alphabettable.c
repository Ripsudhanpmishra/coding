#include<stdio.h>
int main(){
    int m;
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    int n = m-1;
    int nsp = 1;
    int nst = n;
    for (int q = 1; q <= (2*n)+1; q++)
    {
    char ch  = (char)(q+64);
    printf("%c",ch);
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= nst; j++)
        {
        char Ch = (char)(a+64);
        printf("%c",Ch);
        a++;
        }
        for (int k = 1; k <= nsp; k++)
        {
        printf(" ");
        a++;
        }
        for (int l = 1; l <= nst; l++)
        {
        char CH = (char)(a+64);
        printf("%c",CH);
        a++;
        }
        nst--;
        nsp = nsp+2;
        printf("\n");
    }
    return 0;
}