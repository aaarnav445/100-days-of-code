//program to find the product of odd digits of a number.
#include<stdio.h>
int main()
{
    int num, product = 1, remainder, hasOdd = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);    
    while(num != 0)
    {
        remainder = num % 10; // Get the last digit
        if(remainder % 2 != 0) // Check if the digit is odd
        {
            product *= remainder; // Multiply it to the product
            hasOdd = 1; // Indicate that we found at least one odd digit
        }
        num /= 10; // Remove the last digit from the original number
    }
    if(hasOdd)
    {
        printf("Product of odd digits: %d\n", product);
    }
    else
    {   
        printf("No odd digits found in the number.\n");
    }
    return 0;
}