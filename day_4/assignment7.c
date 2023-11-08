/*Write a C program to read the value of X and number of terms n and compute the
sum of following series. X + XX + XXX + XXXX + . . . (e. g. number of term is 4
and X= 6 then sum of series is 6 + 66 + 666 + 6666 = 7404)*/

#include<stdio.h>
int main(){
    int num,n,digit=0,sum=0;

    printf("Enter a number:");
    scanf("%d",&num);
    printf("Enter number of  term:");
    scanf("%d",&n);

    for (int i=0;i<n;i++){
        digit=digit*10 +num;
        sum += digit;
    }

    printf("Solving the expression X + XX + XXX + XXXX + . . .\n");
    printf("Result:%d\n",sum);
}