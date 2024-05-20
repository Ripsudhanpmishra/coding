#include<stdio.h>
int main(){
    // int arr[3][3] = {0,0,0,1,1,1,2,2,2};
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    // int arr1[3][3] = {{1,1,1},{2,2,2},{3,3,3}};
    // int arr2[3][3] = {{3,3,3},{2,2,2},{1,1,1}};                                   
    // int arr3[3][3];
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         arr3[i][j] = (arr1[i][j] + arr2[i][j]);
    //         printf("%d ",arr3[i][j]);
    //     }
    //     printf("\n");
    // }
    int arr1[3][3] = {{1,1,1},{2,2,2},{3,3,3}};
    int arr2[3][3] = {{3,3,3},{2,2,2},{1,1,1}};                              
    int arr3[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
    int arr4[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr4[i][j] = ((arr3[i][j]*arr1[i][j]) + (arr3[i][j]*arr2[i][j]));
            printf("%d ",arr4[i][j]);
        }
        printf("\n");
    }
    return 0;
}