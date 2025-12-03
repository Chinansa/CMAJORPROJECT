
#ifndef RENTAL_H
#define RENTAL_H

void displayMenu();
int getChoice();
int getHours();
float calculateBill(int choice, int hours);
void generateReceipt(int choice, int hours, float bill);

#endif

