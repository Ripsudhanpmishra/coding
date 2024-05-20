#include<stdio.h>
#include<string.h>
void cstrcat(char str1[], char str2[]){
    int size=0;
    while (str1[size]!='\0'){
        size++;
    }
    for (int i = 0; str2[i]!='\0'; i++){
        str1[size]=str2[i];
        size++;
    }
    puts(str1);
}
int main(){
    char s1[100],s2[50];
    printf("Enter the first string");
    gets(s1);
    printf("Enter the second string");
    gets(s2);
    cstrcat(s1,s2);
    return 0;
}