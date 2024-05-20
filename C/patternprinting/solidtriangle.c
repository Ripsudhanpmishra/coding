
#include<stdio.h>
int main (){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
     // for (int j = 1; j <= i; j++)   for erect triangle.
    for (int j = 4; j >= i; j--)
    {
    printf("* ");
    }
    printf("\n");
    }    
    return 0;
}