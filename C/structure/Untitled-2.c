// #include <stdio.h>

// int reverse_number(int n) {
//     static int rev = 0;
//     if (n == 0)
//         return 0;
//     rev = rev * 10 + n % 10;
//     reverse_number(n / 10);
//     return rev;
// }

// int main() {
//     int num = 12345;
//     printf("%d", reverse_number(num));  // Output: 54321
//     return 0;
// }
#include<stdio.h>
int main(){
    typedef struct pokimon{
        int power;
        float health;
    }pokimon;
     pokimon a;
     pokimon b;
    scanf("%d",&a.power);
    printf("\n");
    printf("%d",a.power);
    return 0;
}