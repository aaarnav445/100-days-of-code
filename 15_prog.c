#include<stdio.h>
int main()
{
char ch;
printf("Enter an alphabet: ");
scanf("%c",&ch);
if(ch=='A')
{
printf("Uppercase");
}
else if(ch=='a')
{
printf("Lowercase");
}
return 0;
}
