
#include <stdio.h>
int main()
{
    int a;
    int b;
    int temp;
    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping, first integer is: %d\n", a); 
    printf("After swapping, second integer is: %d\n", b);     
    return 0;
}