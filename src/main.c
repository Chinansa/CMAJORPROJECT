#include <stdio.h>
#include "rental.h"

int main() {
    int choice, hours;
    float bill;

    displayMenu();
    choice = getChoice();

    if (choice == 1 || choice == 2) {       
        hours = getHours();
        bill = calculateBill(choice, hours);
        generateReceipt(choice, hours, bill);
    }
    else if (choice == 3) {
        printf("Exiting...\n");
    }
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
