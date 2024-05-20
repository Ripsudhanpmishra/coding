#include <stdio.h>
int main(){
    float r;
    printf("Enter the value of radius: ");
    scanf("%f",&r);
    float pi = 3.145428;
    float area = pi*r*r;
    printf("The area of the circle of given radius is: %f",area);
    return 0;
}