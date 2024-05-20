#include<stdio.h>
int main()
{
    for (int i = 65; i<=90; i++)
    { char ch = (char)i;
     //printf("%c ",ch);
     // printf("%d",ch);
     //int x = (int)ch;
     printf("%c",ch);
     printf(" --> ");
     printf("%d\n",i);
    }
    return 0;
}