//program to print all the prime numbers from 1 to n.
#include<stdio.h>
int isPrime(int num)
{   
    if(num <= 1)
        return 0; // Not prime
    for(int i = 2; i * i <= num; i++)
    {
        if(num % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);    
    printf("Prime numbers from 1 to %d are:\n", n);
    for(int i = 1; i <= n; i++)
    {
        if(isPrime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}