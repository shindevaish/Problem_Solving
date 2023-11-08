/*Write a C program to print the following pattern:
*
*A*
*B*B*
*C*C*C*
*D*D*D*D*
*E*E*E*E*E*E
... till n lines*/

#include<stdio.h>
int main(){
    char letter=64;
    int row;
    
    printf("Enter number of rows:");
    scanf("%d",&row);

    for (int i=0;i<row;i++){
        printf("*");
        for(int j=0;j<i;j++){
            printf("%c*",letter);
        }
        letter++;
        printf("\n");
    }
}