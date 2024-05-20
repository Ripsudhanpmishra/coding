#include<stdio.h>
int main (){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    // if(x%5==0 || x%3==0){
    //     if (x%15!=0)
    //     {
    //     printf("The Given number is divisible by 3 or 5 but not divisible by 15");    /* code */
    //     }
    //     else {
    //         printf("The given number is divisible by 3 or 5 and also by 15");
    //     }  
    // }
    // else
    // {
    //   printf("The given number is not divisible by 3 or 5.");    /* code */
    // }
    if( (x%5==0 || x%3==0) && x%15!=0){
        printf("The number is divisible by 3 or 5 but not by 15");
    }
    else {
        printf("The number not fulfill the conditions ");
    }
    return 0;
}