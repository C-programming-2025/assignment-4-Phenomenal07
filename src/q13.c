// Write a C program that copies the contents of one file to another file.
#include <stdio.h>

int main() {
    FILE *source, *destination;
    char ch;
    char sourceFile[50], destFile[50];

    printf("Enter source file name: ");
    scanf("%s", sourceFile);

    printf("Enter destination file name: ");
    scanf("%s", destFile);

    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Error: Cannot open source file!\n");
        return 1;
    }

    destination = fopen(destFile, "w");
    if (destination == NULL) {
        printf("Error: Cannot open destination file!\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully!\n");

    fclose(source);
    fclose(destination);

    return 0;
}
