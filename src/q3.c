// Write a C program that checks if a given string is a palindrome using pointers.
#include <stdio.h>

int main() {
    char str[100];
    char *start, *end;
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[length] != '\0') {
        length++;
    }

    start = str; 
    end = str + length - 1;   

    while (start < end) {
        if (*start != *end) {
            printf("The string is NOT a palindrome.\n");
            return 0;
        }
        start++;
        end--;
    }
    printf("The string IS a palindrome.\n");

    return 0;
}
