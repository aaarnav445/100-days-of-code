
#include <stdio.h>
int main()
{
    float celsius;
    float fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    printf("Temperature in Fahrenheit is: %.2f\n", fahrenheit);     
    return 0;
}