#include<stdio.h>

struct student{
    int roll;
};
int main(){
    struct student s[2]; int i;
    printf("Enter the roll no for the student : \n");
    for(i=0;i<2;i++){
        scanf("%d",&s[i].roll);
    }
    printf("Student roll: ");
    for (i=0;i<2; i++){
        printf("%d ",s[i].roll);
    }
    return 0;
}

// structure within structure
struct student{
    char name[20];
    int roll;

};
int main(){
    struct student s[2];
    int i;
    
}
