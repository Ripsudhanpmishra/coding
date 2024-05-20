#include<stdio.h>
int main(){
    int n;
    char str[100];
    gets(str);
    printf("Original string: ");
    puts(str);
    printf("Enter the number of character to extract: ");
    scanf("%d",&n);
    for(int i = 0; i<n; i++){
        printf("%c",str[i]);
    }
    return 0;
}