//program to find the LCM of two numbers.
#include<stdio.h>
int main()
{
    int a, b, max, lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    // LCM is the smallest number that is a multiple of both a and b
    max = (a > b) ? a : b; // Start checking from the larger of the two numbers
    while(1)
    {
        if(max % a == 0 && max % b == 0)
        {
            lcm = max; // Found the LCM
            break;
        }
        max++; // Check the next number
    }
    printf("LCM of %d and %d is: %d\n", a, b, lcm);
    return 0;
}