#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int m = 1;
    for (int i = 1; i <= n; i++)
    {
        // for (int j = 1; j <= n-i; j++)
        // {
         //printf(" ");
        // }
        for (int k = 1; k <= m; k++)
        {
            printf("a ");
        }
        m += 2;
        printf("\n");
    }
    return 0;
}