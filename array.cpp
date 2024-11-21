#include <stdio.h>

int main (){
    int a[]= {12, 2, 0, 3, 4};
    int max = a[0];
    int min = a[0];
    for (int i = 1; i < 5; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];

    }
    return 0;


}