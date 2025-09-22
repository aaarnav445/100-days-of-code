
#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");       
    scanf("%d", &b);
    a = a + b; // Step 1: Add both numbers and store the result in 'a'
    b = a - b; // Step 2: Subtract the new  
                // value of 'a' by 'b' to get the original value of 'a'
    a = a - b; // Step 3: Subtract the new
                // value of 'a' by the new value of 'b' to get the original value of 'b'
    printf("After swapping, first integer is: %d\n", a);    
    printf("After swapping, second integer is: %d\n", b);     
    return 0;