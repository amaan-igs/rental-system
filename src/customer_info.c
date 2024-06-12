// customer_info.c
#include <stdio.h>
#include <string.h>
#include "rental_system.h"

void getCustomerInfo(RentalRecord *record) {
    printf("Please enter your name: ");
    scanf("%s", record->name);

    while (1) {
        printf("Please enter your CNIC number (13 numeric characters): ");
        scanf("%s", record->cnic);

        if (strlen(record->cnic) == 13) {
            break;
        } else {
            printf("Invalid CNIC! Please enter exactly 13 numeric characters.\n");
        }
    }
}
