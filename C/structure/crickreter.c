#include<stdio.h>
#include<string.h>
    struct cricketer{
        char name[20];
        int age;
        int testmatch;
        float avg;
    };
int main(){
    struct cricketer cricketers[21];
    int i;
    for(i=1; i<=2; i++){

        printf("Enter %d cricketer's detail:\n",i);
        printf("Enter Name:");
        scanf("%s",cricketers[i].name);
        printf("Enter Age:");
        scanf("%d",&cricketers[i].age);
        printf("Enter Number of Test Match Played:");
        scanf("%d",&cricketers[i].testmatch);
        printf("Enter average:");
        scanf("%f",&cricketers[i].avg);
    }

    for(i=1; i<=2; i++){
        printf(" %d cricketer's detail:\n",i);
        printf("Name:");
        puts(cricketers[i].name);
        printf("Age:");
        printf("%d\n",cricketers[i].age);
        printf("Number of Test Match Played:");
        printf("%d\n",cricketers[i].testmatch);
        printf("Average:");
        printf("%f\n\n",cricketers[i].avg);
    }
    return 0;
}