/*Write C program to subtract two integers without using Minus (-) operator*/

#include<stdio.h>
int main(){
    int count,a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);

    if (a<b){
        for(int i=a;i<=b;i++){
            count+=1;
        }
    }
    else if(a>b){
        for(int i=b;i<a;i++){
            count+=1;
        }
    }
    else{
        count=0;
    }
    printf("Subtraction of two number without using subtractor operator:%d\n",count);

}