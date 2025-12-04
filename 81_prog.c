//Program to count characters in a string without using built-in length functions.
#include <stdio.h>
int main() {
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Counting characters until the null terminator or newline character
    while(str[count] != '\0' && str[count] != '\n') {
        count++;
    }
    printf("The number of characters in the string is: %d\n", count);
    return 0;      
} 
