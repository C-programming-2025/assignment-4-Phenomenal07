// Write a C program that defines a structure Book with members: title, author, and price. 
// Allow the user to enter details of n books and then display all books whose price is above a 
// user-defined value.
#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    int n, i;
    float limit;
    struct Book b[100];

    printf("Enter number of books: ");
    scanf("%d", &n);

    // Input book details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Title: ");
        scanf(" %[^\n]", b[i].title);

        printf("Author: ");
        scanf(" %[^\n]", b[i].author);

        printf("Price: ");
        scanf("%f", &b[i].price);
    }

    printf("\nEnter price limit: ");
    scanf("%f", &limit);

    // Display books above price limit
    printf("\nBooks with price above %.2f:\n", limit);
    for (i = 0; i < n; i++) {
        if (b[i].price > limit) {
            printf("\nTitle: %s", b[i].title);
            printf("\nAuthor: %s", b[i].author);
            printf("\nPrice: %.2f\n", b[i].price);
        }
    }

    return 0;
}