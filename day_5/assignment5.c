/*Write a C program to Calculate Student Grade According to marks.*/

#include<stdio.h>
int main(){
    int marks;

    printf("Enter marks of student:");
    scanf("%d",&marks);

    if(marks>90){
        printf("Grade : A\n");
    }else if(marks<=90 && marks>75){
        printf("Grade : B\n");
    }else if(marks<=75 && marks>=60){
        printf("Grade : C\n");
    }else if(marks<=60 && marks>=45){
        printf("Grade : D\n");
    }else{
        printf("Grade : E\n");
    }

    return 0;

}