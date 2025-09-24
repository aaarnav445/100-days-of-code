#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num >90)
    {
        printf("A");
    }
    else if(num >79)
    {
        printf("B");
    }
    else if(num >69)
    {
        printf("C");
    }
    else if(num >59)
    {
        printf("D");
    }
    else if(num <50)
    {
        printf("F");
    }
    return 0;
}