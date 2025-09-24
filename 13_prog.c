#include<stdio.h>
int main()
{
    
    int a;
    scanf("%d", &a);
    if(a%4==0)
    
        if(a%100==0)
        {
            if(a%400==0)
            {
                printf("Leap Year");
            }
            else
            {
                printf("Not a Leap Year");
            }
            

            
        int b;
        scanf("%d",&b);
        if(b%4==0)
        { 
            if(b%100==0)
            {
                if(b%400==0)
                {
                    printf("Leap Year");
                }
                else
                {
                    printf("Not a Leap Year");
                }
            }
            else
            {       
                printf("Leap Year");
            }
            int c;
            scanf("%d",&c);
            if(c%4==0)
            { 
                if(c%100==0) 
                {
                    if(c%400==0)
                    {
                        printf("Leap Year");
                    }
                    else
                    {
                        printf("Not a Leap Year");
                    }
                }
                
                
                
            }
        }
        return 0;   
        }
        