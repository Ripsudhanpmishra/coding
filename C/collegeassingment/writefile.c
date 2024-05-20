#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 1000
#define MAX_LENGTH 100

int main() {
    char filename[MAX_LENGTH];
    char lines[MAX_LINES][MAX_LENGTH];
    FILE *fp;
    int i, count = 0;

    printf("Enter the filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    while (fgets(lines[count], MAX_LENGTH, fp) != NULL) {
        lines[count][strlen(lines[count]) - 1] = '\0';  // "E:\pata nhi kyu kar raha hu ye.txt"
        count++;
    }

    fclose(fp);

    printf("The file %s has %d lines.\n", filename, count);

    printf("The lines in the file are:\n");
    for (i = 0; i < count; i++) {
        printf("%s\n", lines[i]);
    }

    return 0;
}
