#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && b==c)
    {
        printf("equilateral triangle"); 
    }
    else if(a==b || b==c || c==a)
    {
        printf("isosceles triangle");
    }
    else
    {
        printf("scalene triangle");
    }
    return 0;
}