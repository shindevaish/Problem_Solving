/*Write a program to perform arithmetic operations such as ‘+’, ‘-’, ‘*’, ‘/’, ‘%’ on
values entered by user.*/

#include<stdio.h>
int main(){
    int a,b;
    
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);

    printf("Sum of two number:%d\n",a+b);
    printf("Subtraction of two numbers:%d\n",a-b);
    printf("Multiplication of two numbers:%d\n",a*b);
    printf("Division of two numbers:%d\n",a/b);
    printf("Remainder of two numbers:%d\n",a%b);

    return 0;
}