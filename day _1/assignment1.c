#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    int ans1=(num%5==0 && num%6==0);
    int ans2=(num%5==0 || num%6==0);
    int ans3=((num%5==0)^(num%6==0));

    printf("Is %d divisible by 5 and 6?%s\n",num,ans1?"True":"False");
    printf("Is %d divisible by 5 or 6?%s\n",num,ans2?"True":"False");
    printf("Is %d divisible by 5 or 6,but not both?%s\n",num,ans3?"True":"False");
}