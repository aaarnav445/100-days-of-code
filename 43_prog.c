//program to check if a number is a strong number.
#include<stdio.h>
int factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    int num, temp, digit, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    temp = num;

    // Calculate the sum of the factorials of each digit
    while(temp != 0)
    {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    // Check if the number is a strong number
    if(sum == num)
    {
        printf("%d is a strong number.\n", num);
    }
    else
    {
        printf("%d is not a strong number.\n", num);
    }

    return 0;
}