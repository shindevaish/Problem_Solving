#include<stdio.h>
int main(){
    char name[50],gender[15],address;
    int roll_no;
    float percent;

    printf("Enter name of student:\n");
    scanf("%s",&name);
    printf("Enter Roll Number of student:\n");
    scanf("%d",&roll_no);
    printf("Enter gender:\n");
    scanf("%s",&gender);
    printf("Enter address:\n");
    scanf("%s",&address);
    printf("Enter percentage of previous examination:\n");
    scanf("%f",&percent);

    printf("Student information");
    printf("Name of student:\n");
    printf("--%s\n",name);
    printf("Roll Number of student:\n");
    printf("--%d\n",roll_no);
    printf("Gender:\n");
    printf("--%s\n",gender);
    printf("Address of student:\n");
    printf("--%s\n",address);
    printf("Percentage of previous examination:\n");
    printf("--%f\n",percent);

}