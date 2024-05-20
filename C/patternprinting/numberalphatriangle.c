#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {       
        if (i%2!=0 ){  
        int a = 1;
        for (int j = 1; j <= i; j++){
        printf("%d ",a);
        a++;
        }
        }
        else
        {
        int b = 65;
        for(int k = 1; k<=i; k++){
            char ch = (char)b;
            printf("%c ",ch);
            b++;
        }
        }
        printf("\n");
    }
    return 0;
}