#include <stdio.h>

int main() {
    char name[50];
    char gender[10];
    char dob[20];

    printf("What's your name? ");
    fgets(name, sizeof(name), stdin);

    printf("What's your gender? ");
    fgets(gender, sizeof(gender), stdin);

    printf("When's your date of birth? (DD/MM/YYYY) ");
    fgets(dob, sizeof(dob), stdin);

    printf("\nThanks for that! Here's what you've told me:\n");
    printf("Name: %s", name);
    printf("Gender: %s", gender);
    printf("Date of Birth: %s", dob);

    return 0;
}