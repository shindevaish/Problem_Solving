/*Write a program to check if the entered number is Neon Number or not. (Not:- A
neon
number is a number where the sum of digits of the square of the number is equal
to the
number.*/

#include<stdio.h>
int main(){
    int num;

    printf("Enter a number:");
    scanf("%d",&num);

    int n=num;
    int sq=num*num,sum=0;

    while(sq!=0){
        int digit=sq%10;
        sum += digit;
        sq /= 10;
    }
    if (sum==n){
        printf("%d is a Neon number.\n",n);
    }else{
        printf("%d is not a Neon Number.\n",n);
    }

    return 0;
}