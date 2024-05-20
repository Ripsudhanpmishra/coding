#include <stdio.h>
int main(){
    int x;
    printf("Enter the length of the Rectangle; ");
    scanf("%d",&x);
    int y;
    printf("Enter the width of the Rectangle: ");
    scanf("%d",&y);
    int z = x*y;
    printf("%d",z);
    int w = 2*(x+y);
    printf("%d",w);
    if (z>w)
    {
    printf("Area is greter then the perameter");
    }
    if (z<w)
    {
    printf("Area is smaller then the perameter");
    }
    if (z==w)
    {
    printf("Area is equal to the perameter ");
    }
    return 0;
}