/*program to take a number as input and print its equivalent binary representation.*/
#include<stdio.h>
int main()
{
    int num, binary[32], i = 0, j;
    printf("Enter a positive integer: ");
    scanf("%d", &num);  
    if(num < 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    while(num > 0)
    {
        binary[i] = num % 2; // Store the remainder (0 or 1)
        num = num / 2; // Update num to the quotient
        i++;
    }
    printf("Binary representation: ");
    for(j = i - 1; j >= 0; j--) // Print the binary digits in reverse order
    {
        printf("%d", binary[j]);
    }
    printf("\n");
    return 0;
}