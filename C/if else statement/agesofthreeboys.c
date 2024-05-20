#include<stdio.h>
int main (){
    int a,b,c;
    printf("Age of Ram:");
    scanf("%d",&a);
    printf("Age of Shyam:");
    scanf("%d",&b); 
    printf("Age of Ajay:");
    scanf("%d",&c);
    if(a<b && a<c){
        printf("Ram is youngest.");
    }
    else if(b<c && b<a){
        printf("Shyam is youngest.");
    }
    else if(c<a && c<b){
        printf("Ajay is youngest.");
    }
    return 0;
}