#include<stdio.h>        // this is the library programing functions
#include<math.h>         // for mathematics functions
void england(){
    printf("you are in england.\n");
    return;
}
void australia(){
    printf("you are in australia.\n");
    england();
    return;
}
void india(){
    printf("you are in india.\n");
    australia();
    return;
}
int main(){
    void india();          // ese 
    india();
    return 0;
}
// jis function ko hum call kar rahe hain vo dusre se uppar hi aayega 
// ya fir hum function calling se pehle us function ka pura naam likh ke call karenge it is also called function prototype.