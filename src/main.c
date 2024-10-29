// main.c
#include "rental_system.h"
#include <string.h>  // For strcmp()
#include <stdio.h>   

int main() {
    RentalRecord customerRecord;
    welcome();
    getCustomerInfo(&customerRecord);
    selectCarType(&customerRecord);
    selectCarModel(&customerRecord);
    selectCarColor(&customerRecord);
    getRentDates(&customerRecord);

    if (strcmp(customerRecord.carType, "SUV") == 0) {
        customerRecord.totalAmount = SUV_RATE * customerRecord.rentDays;
    } else if (strcmp(customerRecord.carType, "Sedan") == 0) {
        customerRecord.totalAmount = SEDAN_RATE * customerRecord.rentDays;
    } else if (strcmp(customerRecord.carType, "Hatchback") == 0) {
        customerRecord.totalAmount = HATCHBACK_RATE * customerRecord.rentDays;
    }

    // Print the final receipt
    printReceipt(customerRecord);

    printf("\nPress Enter to exit...");
    getchar(); 
    getchar(); // Wait for Enter key

    return 0;
}
