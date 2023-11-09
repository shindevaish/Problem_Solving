/*Write a C program to print Fibonacci  Series up to N terms using while loop*/

#include<stdio.h>
int main(){
    int n,a=0,b=1,sum;
    
    printf("Enter number of terms.");
    scanf("%d",&n);

    printf("%d %d ",a,b);

    while(n-2>0){
        sum=a+b;
        a=b;
        b=sum;
        n--;
        printf("%d ",b);
    }
    printf("\n");

    return 0;
}