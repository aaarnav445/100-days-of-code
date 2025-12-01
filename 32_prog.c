/*program to check if a number is a palindrome.*/
#include<stdio.h>
int main()
{
    int num, originalNum, reversed = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);  
    originalNum = num; // Store the original number to compare later
    while(num != 0)
    {
        remainder = num % 10; // Get the last digit
        reversed = reversed * 10 + remainder; // Append it to the reversed number
        num /= 10; // Remove the last digit from the original number
    }
    if(originalNum == reversed)
    {
        printf("%d is a palindrome.\n", originalNum);
    }
    else
    {
        printf("%d is not a palindrome.\n", originalNum);
    }
    return 0;
}