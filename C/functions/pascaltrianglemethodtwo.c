#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int space = n;
    for (int i = 0; i < n; i++)
    {
        for (int k = 1; k <= space; k++)
        {
        printf(" ");
        }
        int first = 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d ",first);
            first = first * (i-j)/(j+1);
        }
        space--;
        printf("\n");
    }
    return 0;
}