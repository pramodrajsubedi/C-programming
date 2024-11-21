#include<stdio.h>
#include<math.h>

// p = principle, a = amount, n = number, t= time 
int main(){
    float p, r, t,n, a, compound_interest;
    printf("Enter the principal amount: \n");
    scanf("%f", &p);

    printf("Enter the rate (in percentage): \n");
    scanf("%f", &r);

    printf("Enter the time (in years): \n");
    scanf("%f", &t);

    printf("Enter the number of times the interest is compounded per year: \n ");
    scanf("%f", &n);

    a = p *pow ((1+r / (n*100)), n*t);
    compound_interest = a - p;

    printf("The compound interest is : %f\n", compound_interest);
    printf("The amount after %.2f years is: %f\n", t, a);

    return 0;

   
}