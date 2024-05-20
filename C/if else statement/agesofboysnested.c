#include<stdio.h>
int main ()
{
    int a, b, c;
    printf("Age of Ram :");
    scanf("%d",&a);
    printf("Age of Shyam :");
    scanf("%d",&b);
    printf("Age of Ajay :");
    scanf("%d",&c);
    if(a<b)
    {
        if(a<c)
        {
        printf("Ram is youngest.");
        }
        else{
        printf("Ajay is youngest.");
        }
    }
    else  
    {
        if(b<c)
        {
        printf("Shyam is youngest.");
        }
        else{
        printf("Ajay is youngest.");
        }
    }
    return 0;
}