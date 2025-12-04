//Program to print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    int i = 0, len;
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    len = strlen(name);
    // Remove newline character if present
    if(name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }
    printf("The formatted name is: ");
    // Print the first character as the first initial
    if(name[0] != ' ' && name[0] != '\0') {
        printf("%c. ", name[0]);
    }
    // Loop through the name to find spaces and print the next character as an initial
    for(i = 0; i < len; i++) {
        if(name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            // If it's the last word, print it in full
            if(name[i + 2] == '\0' || name[i + 2] == '\n') {
                printf("%s", &name[i + 1]);
                break;
            } else {
                printf("%c. ", name[i + 1]);
            }
        }
    }
    printf("\n");
    return 0;      
}