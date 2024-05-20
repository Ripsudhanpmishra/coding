#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    int count = 0;
    char c;

    printf("Enter the filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    while ((c = fgetc(fp)) != EOF) {
        if (c == '\n') {
            count++;
        }
    }

    fclose(fp);

    printf("The file %s has %d lines.\n", filename, count);

    return 0;
}
