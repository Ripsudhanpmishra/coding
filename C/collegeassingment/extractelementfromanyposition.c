#include<stdio.h>
int main(){
    int n,c=0,pos,i;
    char str[100];
    gets(str);
    printf("Original string: ");
    puts(str);
    for(i=0; str[i] != '\0'; i++) c++;
    printf("%d",c);
    printf("Enter the position: ");
    scanf("%d",&pos);
    printf("Enter the number of character to extract: ");
    scanf("%d",&n);
    for(i =pos-1; i<pos+n; i++){
        printf("%c",str[i]);
    }
    return 0;
}