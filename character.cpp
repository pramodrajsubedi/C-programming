// to print the string in the reverse order

# include <stdio.h>
int main(){
    int i = 0;
    int j ;
    char s[10];
    int count = 0;
    printf("Enter a string: ");
    scanf("%s", &s);
    while(s[i] != '\0'){
        count++; i++;
    }
    for (j = count - 1;j>= 0; j--){
        printf("%c", s[j]);
        count--;

    }
    return 0;
}
    