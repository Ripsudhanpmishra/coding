#include<stdio.h>
#include <math.h>
#include<stdlib.h>
#include <time.h>
int game(char you, char computer){
    if(you == computer)
        return 0;
    if(you=='r'&&computer=='p')
        return -1;
    if(you=='r'&&computer=='s')
        return 1;
    if(you=='p'&&computer=='r')
        return 1;
    if(you=='p'&&computer=='s')
        return -1;
    if(you=='s'&&computer=='r')
        return -1;
    if(you=='s'&&computer=='p');
        return 1;                        
}

int main(){
    int n;
    int result;
    char you, computer;

    srand(time(NULL));
    n = rand()%100;
    
    if(n<=33)
        computer = 'r';
    if(n>33 && n<=66)
        computer = 'p';
    if(n>66 && n<100)
        computer = 's';

    printf("\n\n\t\t\tRock, Paper and Secissors Game");
    printf("\n\t\t\tChose your option:\n ");
    printf("\t\t\tr : rock\tp : paper\ts : secissors\n\t\t\t");
    scanf("%c",&you);

    printf("\n\t\t\tYour Choice: %c",you);
    printf("\n\t\t\tComputer's Choice: %c",computer);


    result = game(you, computer);

    if(result==1)
        printf("\n\t\t\t!!!YOU WIN!!!");
    if(result==0)
        printf("\n\t\t\tTIE...");   
    if(result==-1) 
        printf("\n\t\t\tYOU LOSE!!!");    
    return 0; 
}