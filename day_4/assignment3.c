/*Write a C program to display billing details containing information like customer
Id, address, product no., product name and its quantity, cost, and calculate total
amount with 10% GST on cost.*/

#include <stdio.h>

int main() {
    int id, pnumber, quantity;
    char address[100], pname[100];
    float cost, totalamount, gstamount;

    printf("Enter Customer ID: ");
    scanf("%d", &id);

    printf("Enter Customer Address: ");
    scanf(" %[^\n]", address);  // Read a string with spaces

    printf("Enter Product Number: ");
    scanf("%d", &pnumber);

    printf("Enter Product Name: ");
    scanf(" %[^\n]", pname);  // Read a string with spaces

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Cost per Unit: ");
    scanf("%f", &cost);

    totalamount = cost * quantity;
    gstamount = totalamount * 0.10;

    printf("\n--- Billing Details ---\n");
    printf("Customer ID: %d\n", id);
    printf("Customer Address: %s\n", address);
    printf("Product Number: %d\n", pnumber);
    printf("Product Name: %s\n", pname);
    printf("Quantity: %d\n", quantity);
    printf("Cost per Unit: %.2f\n", cost);
    printf("Total Amount (before GST): %.2f\n", totalamount);
    printf("GST (10%% of Total Amount): %.2f\n", gstamount);
    printf("Total Amount (including GST): %.2f\n", totalamount + gstamount);

    return 0;
}
