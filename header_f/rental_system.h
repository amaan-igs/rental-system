// rental_system.h -- HEADER FILE CREATED!!
#ifndef RENTAL_SYSTEM_H
#define RENTAL_SYSTEM_H

#define SUV_RATE 2000
#define SEDAN_RATE 1500
#define HATCHBACK_RATE 1000

typedef struct {
    char name[50];
    char cnic[14];
    char carType[20];
    char carModel[50];
    char carColor[20];
    int rentDays;
    int totalAmount;
} RentalRecord;

void welcome();
void getCustomerInfo(RentalRecord *record);
void selectCarType(RentalRecord *record);
void selectCarModel(RentalRecord *record);
void selectCarColor(RentalRecord *record);
void getRentDates(RentalRecord *record);
void printReceipt(RentalRecord record);

#endif 
