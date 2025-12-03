//Program to find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {
    int number, digit, count, maxCount = 0, mostFrequentDigit = -1;
    int frequency[10] = {0}; // Array to store frequency of digits 0-9

    printf("Enter an integer number: ");
    scanf("%d", &number);

    // Count the frequency of each digit
    while (number != 0) {
        digit = number % 10;
        frequency[digit]++;
        number /= 10;
    }

    // Find the digit with the maximum frequency
    for (digit = 0; digit < 10; digit++) {
        if (frequency[digit] > maxCount) {
            maxCount = frequency[digit];
            mostFrequentDigit = digit;
        }
    }

    if (mostFrequentDigit != -1) {
        printf("The digit that occurs the most is %d with a count of %d.\n", mostFrequentDigit, maxCount);
    } else {
        printf("No digits found.\n");
    }

    return 0;
}