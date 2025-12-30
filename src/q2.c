// Write a C program that reverses an array of characters using pointers.
#include <stdio.h>

int main() {
    char arr[100];
    char *start, *end;
    char temp;
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", arr);

    while (arr[length] != '\0') {
        length++;
    }

    start = arr;
    end = arr + length - 1;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s\n", arr);

    return 0;
}
