// main.c
#include "rental_system.h"

int main() {
    RentalRecord customerRecord;

    welcome();
    getCustomerInfo(&customerRecord);
    selectCarType(&customerRecord);
    selectCarModel(&customerRecord);
    selectCarColor(&customerRecord);
    getRentDates(&customerRecord);
    printReceipt(customerRecord);

    return 0;
}
