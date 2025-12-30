// Write a C program to read the contents of a text file and display them on the screen.
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    printf("Contents of the file:\n");

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}