/*‘C’ program to take as input 3 floating point numbers. The program then
outputs the number with largest magnitude (Largest magnitude number is the largest
number obtained after ignoring the sign).*/
#include<stdio.h>
int main(){
    float num1,num2,num3;

    printf("Enter first number:");
    scanf("%f",&num1);
    printf("Enter second number:");
    scanf("%f",&num2);
    printf("Enter third number:");
    scanf("%f",&num3);

    float mag1=fabs(num1);
    float mag2=fabs(num2);
    float mag3=fabs(num3);

    if (mag1>mag2 && mag1>mag3){
        printf("%f is having largest magnitude than other.\n",num1);
    }
    else if(mag2>mag1 && mag2>mag3){
        printf("%f is having largest magnitude than other.\n",num2);
    }
    else{
        printf("%f is having largest magnitude than other.\n",num3);
    }
    
    return 0;
}