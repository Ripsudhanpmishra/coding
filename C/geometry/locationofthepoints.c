#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter co-ordinate :");
    scanf("%d %d",&x,&y);
    if (x==0 && y!=0)
    {
    printf("The point lies on the y-axis.");    /* code */
    }
    else if (x!=0 && y==0)
    {
    printf("The point lies on the x-axis.");    /* code */
    }
    else if (x==0 && y==0)
    {
    printf("The point is the origion.");    /* code */
    }
    else
    {
    printf("The point lies in any quadrant.");
    }
    return 0;     
}