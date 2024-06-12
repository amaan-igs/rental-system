// rent_dates.c
#include <stdio.h>
#include "rental_system.h"

void getRentDates(RentalRecord *record) {
    printf("\nEnter the rental dates:\n");
    printf("Start date (DD): ");
    scanf("%d", &record->rentDays);
    printf("End date (DD): ");
    int endDate;
    scanf("%d", &endDate);

    record->rentDays = endDate - record->rentDays + 1;
}
