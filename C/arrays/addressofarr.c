#include<stdio.h>
int main(){
    int arr[5];
    for (int i = 0; i <= 4; i++){
        printf("%p\n",&arr[i]);
    }
    
    return 0;
}