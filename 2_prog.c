 
#include <stdio.h>

int main()
{
    int a;
    int b;
    int sum;
    int difference;
    int product;
    float quotient;
    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);
    sum = a + b;
    difference = a - b;
    product = a * b;
    if (b != 0) {
        quotient = (float)a / b;
        printf("Quotient of %d and %d is: %.2f\n",
                a, b, quotient);
    } else {
        printf("Quotient is undefined (division by zero).\n");
    }
    printf("Sum of %d and %d is: %d\n", a, b, sum); 
    printf("Difference of %d and %d is: %d\n", a, b, difference);
    printf("Product of %d and %d is: %d\n", a, b, product);     
    return 0;
}