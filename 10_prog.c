#include<stdio.h>
int main()
{
    int totalseconds, hours, minutes, seconds;
    printf("Enter total seconds: ");    
    scanf("%d", &totalseconds); 
    hours = totalseconds / 3600;
    minutes = (totalseconds % 3600) / 60;
    seconds = (totalseconds % 3600) % 60;       
    printf("Hours: %d, Minutes: %d, Seconds: %d\n", hours, minutes, seconds);
    return 0;
}  