#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter first side:");
    scanf("%d",&a);
     printf("Enter second side:");
    scanf("%d",&b);
     printf("Enter third side:");
    scanf("%d",&c);
    if ((a+b)>c && (a+c)>b && (b+c)>a)
    {
    printf("Given numbers can be the side of triangles.");    /* code */
    }
    else
    {
        printf("Given numbers cannot be the side of the triangles.");
    }
    return 0;
}