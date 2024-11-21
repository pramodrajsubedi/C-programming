#include<stdio.h>

int main(){
    int marks[5],sum = 0, pass = 1, k;
    float percentage;
    printf("Enter the marks of five subjects:\n");
    for(k = 0; k < 5; k++){
        printf("marks for the subject %d: \n",k +1);
        scanf("%d",&marks[k]);
        if(marks[k] < 35){
            pass = 0;
            
        }
               sum += marks[k]; // Calculate the total sum of marks
    }

    // If all marks are entered, calculate percentage and check pass/fail status
    if (pass) {
        // Calculate the percentage
        percentage = (float)sum / 5;
        printf("Total marks: %d\n", sum);
        printf("Percentage: %.2f%%\n", percentage);
        printf("Status: Passed\n");
        if (percentage >= 60) {
            printf("Division: First Division\n");
        } else if (percentage >= 50) {
            printf("Division: Second Division\n");
        } else if (percentage >= 40) {
            printf("Division: Third Division\n");
        } else {
            printf("Division: Pass Class\n");
        }
    } else {
        printf("One or more subjects have marks less than 35. Status: Failed\n");
    }

    return 0;
}

