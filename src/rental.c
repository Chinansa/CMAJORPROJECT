
#include <stdio.h>
#include "rental.h"

void displayMenu() {
    printf("===== TWO-WHEELER RENTAL SYSTEM =====\n");
    printf("1. Rent a Scooter (₹50/hr)\n");
    printf("2. Rent a Bike    (₹80/hr)\n");
    printf("3. Exit\n");
}

int getChoice() {
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}

int getHours() {
    int hrs;
    printf("Enter number of hours: ");
    scanf("%d", &hrs);
    return hrs;
}

float calculateBill(int choice, int hours) {
    if (choice == 1)
        return hours * 50;
    else if (choice == 2)
        return hours * 80;
    else
        return 0;
}

void generateReceipt(int choice, int hours, float bill) {
    printf("\n--- BILL RECEIPT ---\n");
    printf("Vehicle: %s\n", (choice == 1) ? "Scooter" : "Bike");
    printf("Hours Rented: %d\n", hours);
    printf("Total Bill: ₹%.2f\n", bill);
}
