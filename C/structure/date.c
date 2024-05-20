#include<stdio.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int date;
        int month;
        int year;
    }Date;
    Date a,b;
    a.date=11;
    a.month=8;
    a.year=2005;
    b.date=16;
    b.month=9;
    b.year=2007;
    bool flage = true;
    if(a.date!=b.date) flage = false;
    if(a.month!=b.month) flage = false;
    if(a.year!=b.year) flage = false;
    if(flage==true)  printf("equal");
    else  printf("unequal");
    return 0;
}