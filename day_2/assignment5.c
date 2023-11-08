/*Write a program to enter two no.s (say 8 and 10) and evaluate the expression:
n1+=n2 * 4 – 7*/

#include<stdio.h>
int main(){
    int n1,n2;

    printf("Enter value of n1:");
    scanf("%d",&n1);
    printf("Enter value of n2:");
    scanf("%d",&n2);

    printf("Evaluating the expression:(n1+=n2 *4-7)\n");
    n1+=n2 *4-7;
    printf("Value of given expression:%d\n",n1);
    
    return 0;
}