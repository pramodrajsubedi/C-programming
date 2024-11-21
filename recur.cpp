#include <stdio.h>  

int gcd(int a, int b){
    if (b == 0)
       return a;
    else
       return gcd(b, a % b);
    
    
}
// int main (){
//     int a = 48;
//     int b = 18;
//     int result = gcd(a, b);
//     printf("%d", result);

//     return 0;



// }
int main (){
    int a,b;

    printf("Enter the first number: \n");
    scanf("%d",&a);

    printf("Enter the second number: \n");
    scanf("%d",&b);

    int result = gcd(a, b);
    printf("The GCD of %d and %d is %d", a, b,result);
    return 0;
    

}


