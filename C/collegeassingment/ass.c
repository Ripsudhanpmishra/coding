#include <stdio.h>

int main() {
    int i, j, k;
    int matrix1[3][3];
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            scanf("%d",&matrix1[i][j]);
        }   
    }

    int matrix2[3][3];
    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            scanf("%d",&matrix2[i][j]);
        }   
    }

    int result[3][3];   
   

    // Display Matrix 1
    printf("Matrix 1:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }

    // Display Matrix 2
    printf("\nMatrix 2:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }

    // Addition
    printf("\nAddition Result:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    // Subtraction
    printf("\nSubtraction Result:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    // Multiplication
    printf("\nMultiplication Result:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = 0;
            for (k = 0; k < 3; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    // Transpose of Matrix 1
    printf("\nTranspose of Matrix 1:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = matrix1[j][i];
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;

    // Input matrix elements
    printf("Enter the elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &matrix[i][j]);

    // Display matrix
    printf("\nThe entered matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d\t", matrix[i][j]);
        printf("\n");
    }

    // Calculate determinant
    int determinant =
        matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[2][1] * matrix[1][2]) -
        matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[2][0] * matrix[1][2]) +
        matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[2][0] * matrix[1][1]);

    // Display determinant
    printf("\nThe determinant of the matrix is: %d\n", determinant);

    return 0;
}


#include <stdio.h>

#define SIZE 3

int main() {
    int matrix[SIZE][SIZE];

    // Input matrix elements
    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            scanf("%d", &matrix[i][j]);

    // Display matrix
    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++)
            printf("%d\t", matrix[i][j]);
        printf("\n");
    }

    // Check if it is an identity matrix
    int isIdentity = 1; // Assume it is an identity matrix

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            // Check if elements on the diagonal are 1 and others are 0
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0)) {
                isIdentity = 0; // Not an identity matrix
                break;
            }
        }
        if (!isIdentity) {
            break;
        }
    }

    // Display result
    if (isIdentity) {
        printf("\nThe given matrix is an identity matrix.\n");
    } else {
        printf("\nThe given matrix is NOT an identity matrix.\n");
    }

    return 0;
}
