#include<stdio.h>
int maze(int cr, int cc, int er, int ec){
    int rightways = 0; 
    int downways = 0;
    if (cr==er && cc==ec) return 1;
    if (cr==er){
        rightways += maze(cr,cc+1,er,ec);
    }
    if (cc==ec){ 
        downways += maze(cr+1,cc,er,ec);
    }       
    if (cc<ec && cr<er){
        rightways += maze(cr,cc+1,er,ec);
        downways += maze(cr+1,cc,er,ec);
    }     
    int totalways = rightways + downways;
    return totalways;
}
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int m;
    printf("Enter tr number of column: ");
    scanf("%d",&m);
    int noOfways = maze(1,1,n,m);
    printf("The number of rows is: %d",noOfways);
    return 0;
}