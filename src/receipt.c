// receipt.c
#include <stdio.h>
#include "rental_system.h"

void printReceipt(RentalRecord record) {
    printf("\n-------- Rental Receipt --------\n");
    printf("Customer Name: %s\n", record.name);
    printf("CNIC Number: %s\n", record.cnic);
    printf("Car Type: %s\n", record.carType);
    printf("Car Model: %s\n", record.carModel);
    printf("Car Color: %s\n", record.carColor);
    printf("Rental Dates: %d days\n", record.rentDays);
    printf("Total Amount: Rs. %d\n", record.totalAmount * record.rentDays);
    printf("\n-------- Important Instructions --------\n");
    printf("1. Please return the car on time.\n");
    printf("2. Fuel should be filled to the same level as it was at the time of renting.\n");
    printf("3. Any damage to the car will be charged separately.\n");
    printf("4. Have a safe and pleasant journey!\n");
    printf("---------------------------------------\n");
}
