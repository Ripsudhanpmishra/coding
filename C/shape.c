// #include <stdio.h>

// int main() {
//     printf("    **     **\n");
//     printf(" *******\n");
//     printf("  *******\n");
//     printf("   *****\n");
//     printf("    ***\n");
//     printf("     *\n");

//     return 0;
// }
#include <stdio.h>
#include <math.h>

int main() {
    int radius = 10; // Change this value to adjust the radius of the circle

    // Loop through rows and columns to print the circle
    for (int i = -radius; i <= radius; i++) {
        for (int j = -radius; j <= radius; j++) {
            // Check if the point is within the circle equation
            if (sqrt(i*i + j*j) <= radius + 0.5) {
                printf("* ");
            } else {
                printf("  "); // Print spaces for points outside the circle
            }
        }
        printf("\n");
    }

    return 0;
}
