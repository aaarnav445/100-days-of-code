
#include <stdio.h>
int main()
{
    float length;
    float breadth;
    float area;
    float perimeter;
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of the rectangle: ");
    scanf("%f", &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("Area of the rectangle is: %.2f\n", area); 
    printf("Perimeter of the rectangle is: %.2f\n", perimeter);     
    return 0;
}