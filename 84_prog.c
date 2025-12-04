//Program to convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);
    // Converting lowercase to uppercase
    while(str[i] != '\0' && str[i] != '\n') {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // Convert to uppercase
        }
        i++;
    }
    printf("The uppercase string is: %s\n", str);
    return 0;      
}