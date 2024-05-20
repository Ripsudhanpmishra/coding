#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    char *p1 = str1, *p2 = str2;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    while (*p1 == *p2) {
        if (*p1 == '\0' || *p2 == '\0')
            break;

        p1++;
        p2++;
    }

    if (*p1 == '\0' && *p2 == '\0')
        printf("The strings are equal.\n");
    else
        printf("The strings are not equal.\n");

    return 0;
}
