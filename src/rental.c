
#include <stdio.h>
void displayMenu();
int getChoice();
int getHours();
float calculateBill(int choice, int hours);
void generateReceipt(int choice, int hours, float bill);

int main() {
    int choice, hours;
    float bill;

    displayMenu();
    choice = getChoice();

    if (choice == 1 || choice == 2) {    // FIXED: replaced | with ||
        hours = getHours();
        bill = calculateBill(choice, hours);
        generateReceipt(choice, hours, bill);
    } 
    else if (choice == 3) {
        printf("Exiting the system...\n");
    } 
    else {
        printf("Invalid choice! Please try again.\n");
    }

    return 0;
}

void displayMenu() {
    printf("===== Two-Wheeler Rental System =====\n");
    printf("1. Rent a Scooter\n");
    printf("2. Rent a Bike\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
}

int getChoice() {
    int c;
    scanf("%d", &c);
    return c;
}

int getHours() {
    int h;
    printf("Enter number of hours: ");
    scanf("%d", &h);
    return h;
}

float calculateBill(int choice, int hours) {
    float rate;
    if (choice == 1)
        rate = 50.0;  // Scooter rate
    else
        rate = 80.0;  // Bike rate
    return rate * hours;
}

void generateReceipt(int choice, int hours, float bill) {
    printf("\n===== RECEIPT =====\n");
    printf("Vehicle Type: %s\n", choice == 1 ? "Scooter" : "Bike");
    printf("Hours Rented: %d\n", hours);
    printf("Total Bill: ₹%.2f\n", bill);
}
