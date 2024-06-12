// car_selection.c
#include <stdio.h>
#include <string.h>
#include "rental_system.h"

void displayCarOptions() {
    printf("\nCar Options:\n");
    printf("1. SUV\n");
    printf("2. Sedan\n");
    printf("3. Hatchback\n");
}

void selectCarType(RentalRecord *record) {
    int choice;
    displayCarOptions();
    printf("Select the type of car (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            strcpy(record->carType, "SUV");
            record->totalAmount = SUV_RATE;
            break;
        case 2:
            strcpy(record->carType, "Sedan");
            record->totalAmount = SEDAN_RATE;
            break;
        case 3:
            strcpy(record->carType, "Hatchback");
            record->totalAmount = HATCHBACK_RATE;
            break;
        default:
            printf("Invalid choice! Please select 1, 2, or 3.\n");
            selectCarType(record);
    }
}

void displayCarModelsMenu(char *carType) {
    printf("\nCar Models for %s:\n", carType);

    if (strcmp(carType, "SUV") == 0) {
        printf("1. Honda BR-V\n");
        printf("2. Hyundai Tucson\n");
        printf("3. MG HS\n");
        printf("4. Kia Sportage\n");
        printf("5. Toyota Fortuner\n");
    } else if (strcmp(carType, "Sedan") == 0) {
        printf("1. Hyundai Elantra\n");
        printf("2. Honda Civic\n");
        printf("3. Toyota Corolla\n");
        printf("4. Toyota Yaris\n");
        printf("5. Honda City\n");
    } else if (strcmp(carType, "Hatchback") == 0) {
        printf("1. Suzuki Alto\n");
        printf("2. Suzuki Cultus\n");
        printf("3. Suzuki Wagon R\n");
        printf("4. Toyota Vitz\n");
        printf("5. Suzuki Swift\n");
    }
}

void displayCarModelOptions(char *carType, int modelNumber) {
    if (strcmp(carType, "SUV") == 0) {
        switch (modelNumber) {
            case 1:
                printf("Selected Model: Honda BR-V\n");
                break;
            case 2:
                printf("Selected Model: Hyundai Tucson\n");
                break;
            case 3:
                printf("Selected Model: MG HS\n");
                break;
            case 4:
                printf("Selected Model: Kia Sportage\n");
                break;
            case 5:
                printf("Selected Model: Toyota Fortuner\n");
                break;
            default:
                printf("Invalid choice! Please select a valid model.\n");
        }
    } else if (strcmp(carType, "Sedan") == 0) {
        switch (modelNumber) {
            case 1:
                printf("Selected Model: Hyundai Elantra\n");
                break;
            case 2:
                printf("Selected Model: Honda Civic\n");
                break;
            case 3:
                printf("Selected Model: Toyota Corolla\n");
                break;
            case 4:
                printf("Selected Model: Toyota Yaris\n");
                break;
            case 5:
                printf("Selected Model: Honda City\n");
                break;
            default:
                printf("Invalid choice! Please select a valid model.\n");
        }
    } else if (strcmp(carType, "Hatchback") == 0) {
        switch (modelNumber) {
            case 1:
                printf("Selected Model: Suzuki Alto\n");
                break;
            case 2:
                printf("Selected Model: Suzuki Cultus\n");
                break;
            case 3:
                printf("Selected Model: Suzuki Wagon R\n");
                break;
            case 4:
                printf("Selected Model: Toyota Vitz\n");
                break;
            case 5:
                printf("Selected Model: Suzuki Swift\n");
                break;
            default:
                printf("Invalid choice! Please select a valid model.\n");
        }
    }
}

void selectCarModel(RentalRecord *record) {
    int choice;
    displayCarModelsMenu(record->carType);
    printf("Select the model of the car (1-5): ");
    scanf("%d", &choice);

    displayCarModelOptions(record->carType, choice);

    if (strcmp(record->carType, "SUV") == 0) {
        switch (choice) {
            case 1:
                strcpy(record->carModel, "Honda BR-V");
                break;
            case 2:
                strcpy(record->carModel, "Hyundai Tucson");
                break;
            case 3:
                strcpy(record->carModel, "MG HS");
                break;
            case 4:
                strcpy(record->carModel, "Kia Sportage");
                break;
            case 5:
                strcpy(record->carModel, "Toyota Fortuner");
                break;
            default:
                printf("Invalid choice! Please select a valid model.\n");
                selectCarModel(record);
        }
    } else if (strcmp(record->carType, "Sedan") == 0) {
        if (choice >= 1 && choice <= 5) {
            const char *sedanModels[] = {"Hyundai Elantra", "Honda Civic", "Toyota Corolla", "Toyota Yaris", "Honda City"};
            strcpy(record->carModel, sedanModels[choice - 1]);
        } else {
            printf("Invalid choice! Please select a valid model.\n");
            selectCarModel(record);
        }
    } else if (strcmp(record->carType, "Hatchback") == 0) {
        if (choice >= 1 && choice <= 5) {
            const char *hatchbackModels[] = {"Suzuki Alto", "Suzuki Cultus", "Suzuki Wagon R", "Toyota Vitz", "Suzuki Swift"};
            strcpy(record->carModel, hatchbackModels[choice - 1]);
        } else {
            printf("Invalid choice! Please select a valid model.\n");
            selectCarModel(record);
        }
    }
}

void selectCarColor(RentalRecord *record) {
    printf("\nAvailable Car Colors:\n");
    printf("1. Black\n");
    printf("2. White\n");
    printf("3. Red\n");
    printf("4. Silver\n");

    int choice;
    printf("Select the color of the car (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            strcpy(record->carColor, "Black");
            break;
        case 2:
            strcpy(record->carColor, "White");
            break;
        case 3:
            strcpy(record->carColor, "Red");
            break;
        case 4:
            strcpy(record->carColor, "Silver");
            break;
        default:
            printf("Invalid choice! Please select 1, 2, 3, or 4.\n");
            selectCarColor(record);
    }
}
