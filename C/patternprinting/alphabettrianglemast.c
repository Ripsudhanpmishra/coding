#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n-i; k++)
        {
        printf(" ");//for space
        }
        int a=65;
        for (int j = 1; j <= i; j++)
        {
        char ch = (char)a;
        printf("%c",ch);
        a = a+2;
        }
        printf("\n");
    }    
    return 0;
}