//program to swap the first and last digit of a number.
#include<stdio.h>
int main()
{
    int num, firstDigit, lastDigit, numDigits, powerOfTen, middlePart, swappedNum;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Extract the last digit
    lastDigit = num % 10;

    // Find the number of digits and the first digit
    numDigits = 0;
    int temp = num;
    while(temp != 0)
    {
        temp /= 10;
        numDigits++;
    }

    powerOfTen = 1;
    for(int i = 1; i < numDigits; i++)
    {
        powerOfTen *= 10;
    }

    firstDigit = num / powerOfTen;

    // Extract the middle part of the number
    middlePart = (num % powerOfTen) / 10;

    // Form the new number with swapped digits
    swappedNum = lastDigit * powerOfTen + middlePart * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}