//Program to change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
int main() {
    char date[11]; // Format: dd/04/yyyy
    printf("Enter date in dd/04/yyyy format: ");
    fgets(date, sizeof(date), stdin);
    // Validate input format
    if(date[2] != '/' || date[5] != '/' || date[3] != '0' || date[4] != '4') {
        printf("Invalid date format!\n");
        return 1;
    }
    // Change month from "04" to "Apr"
    date[3] = 'A';
    date[4] = 'p';
    date[5] = 'r';
    printf("Date in dd-Apr-yyyy format: %s\n", date);
    return 0;      
}
