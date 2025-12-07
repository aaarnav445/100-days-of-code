#include <stdio.h>
#include <ctype.h>

int main() {
    char s[200];
    fgets(s,200,stdin);
    int i;
    s[0] = toupper(s[0]);
    for(i=1;s[i]!='\0';i++){
        if(s[i-1]=='.' || s[i-1]=='!') s[i] = toupper(s[i]);
        else s[i] = tolower(s[i]);
    }
    printf("%s",s);
    return 0;
}

