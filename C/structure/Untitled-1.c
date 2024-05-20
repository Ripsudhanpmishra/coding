// // // // // #include<stdio.h>
// // // // // struct player_info{
// // // // //     char name[25];
// // // // //     int score;
// // // // //     int age;
// // // // //     long long int ph;
// // // // // };a
// // // // // struct team {
// // // // //     char tname[20];
// // // // //     struct player_info NP[10]; 
// // // // // };
// // // // // void main(){
// // // // //     struct team NT[5];
// // // // //     // no. of teams=2
// // // // //     for(int i=0; i<=1;i++){
// // // // //         scanf("%s %s %d %d %ld",NT[i].tname,NT[i].NP[i].name,&NT[i].NP[i].score,&NT[i].NP[i].age,&NT[i].NP[i].ph);
// // // // //     }

// // // // //      for(int i=0; i<=1;i++){
// // // // //         printf("%s %s %d %d %ld",NT[i].tname,NT[i].NP[i].name,NT[i].NP[i].score,NT[i].NP[i].age,NT[i].NP[i].ph);
// // // // //     }

// // // // // }
#include<stdio.h>
#include<stdlib.h>
int main(){
    int matrix[3][4] = { {1, 2, 3, 4,7,8,9}, {5, 6, 7, 8}, {9, 10, 11, 12} }; 
    printf("%d",matrix[2][0]);
   return 0;
}
// #include <stdio.h>
// // // int main(){
// // //     int i=0;
// // //     char str[100]="Ram is a good boy.";
// // //     while(str[i]!='\0'){
// // //         if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
// // //             for(int j=i; str[j]!='\0';j++){
// // //                 str[j]=str[j+1];
// // //             }
// // //         }
// // //         i++;
// // //     }
// // //     puts(str);
// // //     return 0;
// // // }
// // #include <stdio.h>
// // int main(){
// //     int a=5;
// //     printf("%d %d %d",++a,++a,++a);
// //     return 0;
// // }
#include <stdio.h>
#include <string.h>
#define max(x) (x*x)
int main(){
  char ch='\0';
  
 printf("%c",ch);
   return 0;
}
// #include <stdio.h>

// int main() {
//     int num = 5;
//     int onesComplement, twosComplement;

//     // Calculate 1's complement
//     onesComplement = ~num;

//     // Calculate 2's complement
//     twosComplement = onesComplement + 1;

//     printf("Original number: %d\n", num);
//     printf("1's complement: %d\n", onesComplement);
//     printf("2's complement: %d\n", twosComplement);

//     return 0;
// }
