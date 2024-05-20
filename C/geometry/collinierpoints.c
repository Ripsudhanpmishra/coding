#include<stdio.h>
int main(){
    float x1, y1, x2, y2, x3, y3;
    printf("Enter first co-ordinate:");
    scanf("%f %f",&x1,&y1);
    printf("Enter second co-ordinate:");
    scanf("%f %f",&x2,&y2);
    printf("Enter third co-ordinate:");
    scanf("%f %f",&x3,&y3);
    float m1 = ((y2-y1)/(x1-x2));
    printf("%f",m1);
    float m2 = ((y3-y2)/(x3-x2));
    printf("%f",m2);
    if (m1==m2)
    {
    printf("The points are colliner.");
    }
    else{
    printf("The points are not colliner.");    
    }
    return 0;
}