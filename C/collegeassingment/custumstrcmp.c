#include<stdio.h>
int cstrcmp(char str1[], char str2[]){
    int i;
    for (i = 0; str2[i]!='\0' && str1[i]!='\0'; i++){
        if(str1[i]!=str2[i]) return 1;
    }
    return str1[i]-str2[i];
}
int main(){
    char s1[100],s2[50];
    printf("Enter the first string");
    gets(s1);
    printf("Enter the second string");
    gets(s2);
    int Ansres = cstrcmp(s1,s2);
    if(Ansres==0) printf("The strings are equal.");
    else printf("the string are not equal.");
    return 0;
}