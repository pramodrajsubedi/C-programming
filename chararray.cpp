#include <stdio.h>

int main(){
    int i = 0;
    char s[10];
    printf("Enter a string: ");
    scanf("%s", &s);
    while(s[i] != '\0'){
        printf("%c", s[i]);
        i++;
    }
    return 0;
}