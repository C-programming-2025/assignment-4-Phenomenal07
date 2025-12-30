// Write a C program that defines a structure Car with members: model, year, and mileage. 
// Store information for 3 cars and find the car with the lowest mileage.
#include <stdio.h>

struct Car {
    char model[50];
    int year;
    float mileage;
};

int main() {
    struct Car c[3];
    int i, minIndex = 0;

    for (i = 0; i < 3; i++) {
        printf("\nEnter details of Car %d\n", i + 1);

        printf("Model: ");
        scanf(" %[^\n]", c[i].model);

        printf("Year: ");
        scanf("%d", &c[i].year);

        printf("Mileage: ");
        scanf("%f", &c[i].mileage);
    }

    for (i = 1; i < 3; i++) {
        if (c[i].mileage < c[minIndex].mileage) {
            minIndex = i;
        }
    }

    printf("\nCar with Lowest Mileage:\n");
    printf("Model: %s\n", c[minIndex].model);
    printf("Year: %d\n", c[minIndex].year);
    printf("Mileage: %.2f\n", c[minIndex].mileage);

    return 0;
}