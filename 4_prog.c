
#include <stdio.h>
#include <math.h>   
#define PI 3.14159
int main()
{
    float radius;
    float area;
    float circumference;
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("Area of the circle is: %.2f\n", area); 
    printf("Circumference of the circle is: %.2f\n", circumference);     
    return 0;
}