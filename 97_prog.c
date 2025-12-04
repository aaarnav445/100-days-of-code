//Program to print the initials of a name.
#include <stdio.h>
int main() {
    char name[100];
    int i = 0;
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    printf("The initials are: ");
    // Print the first character as the first initial
    if(name[0] != ' ' && name[0] != '\n') {
        printf("%c. ", name[0]);
    }
    // Loop through the name to find spaces and print the next character as an initial
    while(name[i] != '\0' && name[i] != '\n') {
        if(name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\n' && name[i + 1] != '\0') {
            printf("%c. ", name[i + 1]);
        }
        i++;
    }
    printf("\n");
    return 0;      
}
