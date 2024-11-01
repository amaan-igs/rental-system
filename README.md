# rental-system
![image](https://github.com/amaan-igs/rental-system/assets/172314900/23c19a85-8be1-4117-b72c-8b1a7128f9a0)


Overview The Car Rental System is a simple command-line program written in C. It allows users to rent cars by selecting car types, models, and colors, and calculates the rental cost based on the number of days the car is rented. The code is split into multiple files to keep it organized and easy to manage.

Project Structure The project is divided into several files:

Header File

rental_system.h: Contains common definitions, structure declarations, and function prototypes. Source Files

main.c: The main file that runs the program. welcome.c: Contains the function to display the welcome message. customer_info.c: Contains functions to get customer information. car_selection.c: Contains functions to select car types, models, and colors. rent_dates.c: Contains the function to get rental dates. receipt.c: Contains the function to print the rental receipt. How It Works Header File (rental_system.h):

Defines rental rates for different car types. Declares the RentalRecord structure to store customer and rental details. Lists all the function prototypes. Source Files:

Each source file handles specific tasks, making the code easier to manage and understand. Compilation and Execution To compile and run the program:

Compile the Program: Use this command to compile all the source files into an executable named car_rental_system:
- gcc -I header_f src/*.c -o car_rental_system

Preview

![Screenshot 2024-10-29 204451](https://github.com/user-attachments/assets/15c7c01b-d745-44be-b09c-233145926f14)
![Screenshot 2024-10-29 204539](https://github.com/user-attachments/assets/ee744c37-3edf-4cf3-8281-5da3471cd622)

Usage

Run the program to see a welcome message.
Enter your name and CNIC number when prompted.
Select the type of car you want to rent (SUV, Sedan, Hatchback).
Choose a specific car model.
Select the car color.
Enter the rental start and end dates.
The program will display a receipt with all the details and the total cost.
