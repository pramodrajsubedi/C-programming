#include<stdio.h>
#include<math.h>

struct student{
    int rollno;
    char name[20];
     
};
int main(){
    struct student s1,s2;
    printf("Enter the name and roll no of the first student: \n");
    scanf("%s %d",s1.name,&s1.rollno);

    printf("Enter the name and roll no of the first student: \n");
    scanf("%s %d",s2.name,&s2.rollno);

    printf("\n Student : %s, Roll no: %d",s1.name,s1.rollno);
    printf("\n Student : %s, Roll no: %d", s2.name, s2.rollno);
    return 0;

}
    
