/*Write a C program to print day of week with respect to number entered by user
using switch statement.*/

#include<stdio.h>
int main(){
    int select;

    printf("Select any number from (1 to 7):");
    scanf("%d",&select);

    switch(select){
        case 1:
            printf("It is Monday.\n");
            break;
        case 2:
            printf("It is Tuesday.\n");
            break;
        case 3:
            printf("It is Wednesday.\n");
            break;
        case 4:
            printf("It is Thursday.\n");
            break;
        case 5:
            printf("It is Friday.\n");
            break;
        case 6:
            printf("It is Saturday.\n");
            break;
        case 7:
            printf("It is Sunday.\n");
            break;
        default:
            printf("Invalid Selection.\n");
            break;

    }
}