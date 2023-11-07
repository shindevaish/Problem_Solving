/*Find the solutions by using recursive functions
User input one positive integer n, Create a function to find sum of all numbers upto
n. Sum = n+(n-1)+(n-2)… +2+1+0*/

#include<stdio.h>
int main(){
    int num,sum=0;

    printf("Enter number:");
    scanf("%d",&num);

    for(int i=num;i>0;i--){
        sum=sum+i;
    }

    printf("Sum = n+(n-1)+(n-2)… +2+1+0");
    printf("Value of above expression:%d\n",sum);
}