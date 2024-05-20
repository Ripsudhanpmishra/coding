#include<stdio.h>
int main(){
    int n,c=0,j=0;
    char str[100];
    gets(str);
    printf("Original string: ");
    puts(str);
    for(int i=0; str[i] != '\0'; i++) c++;
    printf("%d",c);
    printf("Enter the number of character to extract: ");
    scanf("%d",&n);
    for(int i = c-n; i<c; i++){
        printf("%c",str[i]);
    }
    return 0;
}