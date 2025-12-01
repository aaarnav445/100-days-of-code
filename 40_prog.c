//program to find the 1’s complement of a binary number and print it.
#include<stdio.h>
int main()
{
    int n, i;
    int binary[32], onesComplement[32];
    printf("Enter a positive integer: ");
    scanf("%d", &n);  
    if(n < 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;   
    }
    // Convert to binary
    i = 0;
    while(n > 0)
    {
        binary[i] = n % 2; // Store the remainder (0 or 1
        n = n / 2; // Update n to the quotient
        i++;
    }
    // Calculate 1's complement
    for(int j = 0; j < i; j++)  
    {
        onesComplement[j] = 1 - binary[j]; // Flip the bits
    }
    // Print 1's complement in correct order
    printf("1's Complement: ");
    for(int j = i - 1; j >= 0; j--)
    {
        printf("%d", onesComplement[j]);
    }
    printf("\n");
    return 0;
}