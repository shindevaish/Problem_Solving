/*Write a C program to convert length in feet to meter and meters to centimetres.*/

#include<stdio.h>
int main(){
    int feet;

    printf("Enter length(in feet):");
    scanf("%d",&feet);

    printf("%d feet is equivalent to %f meters.\n",feet,feet*0.3048);
    printf("%d feet is equivalent to %f centimeter.\n",feet,feet*30.48);

    return 0;
}