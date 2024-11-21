#include<stdio.h>
int main(){
    float p, t , r, i;
    printf("Enter the principle amount: \n");
    scanf("%f", &p);

    printf("Enter the rate in (in percentage): \n");
    scanf("%f", &r);

    printf("Enter the time (in years): \n");
    scanf("%f", &t);

    i = (p*t*r)/100;

    printf("The  simple interest is %f ", i);

    return 0;
}