// #include<stdio.h>
// int main(){
// int i,j,a[3][3],b[6],k=0;
// for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
// printf("enter the elements %d",i+1);
// scanf("%d", &a[i][j]);
//     }
// }
// for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
// printf("%d", a[i][j]);
//     }
//     printf("\n");
// }
// for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
// if(i==j||i-j==1||i-j==2){
//     b[k]=a[i][j];
//     k++;
// }
// ;

//     }
//     }
//     for(i=0;i<6;i++){
    
// printf("%d ", b[i]);
//     }
//     printf("\n");
// }
#include <stdio.h>

#define SIZE 4 // Size of the tridiagonal matrix

void display(int matrix[][3]) {
    printf("Tridiagonal Sparse Matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int sparseMatrix[SIZE][3] = {
        {1, 2, 0},
        {3, 4, 5},
        {0, 6, 7},
        {0, 0, 8}
    };

    display(sparseMatrix);

    return 0;
}

