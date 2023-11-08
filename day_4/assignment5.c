/*Write C Program which will accept a 4-digit number and depending on the user
choice code will perform the following.
Choice Code Action
1 Reverse of number
2 Sum of its digits
Otherwise Exit with Error*/

#include<stdio.h>
int main(){
    int choice;

    printf("1.Reverse of a number.\n");
    printf("2.Sum of its digits.\n");
    printf("Enter choice code:");
    scanf("%d",&choice);

    int n,remainder,reverse=0,digit,sum=0;

    switch(choice){
        case 1:
            printf("Enter a number:");
            scanf("%d",&n);

            while (n != 0) {
                remainder = n % 10;
                reverse = reverse * 10 + remainder;
                n /= 10;
            }

            printf("Reversed number = %d\n", reverse);
            break;
        case 2:
            printf("Enter a number:");
            scanf("%d",&n);

            int num=n;

            while(n!=0){
                digit = n%10;
                sum += digit;
                n /= 10;
            }
            printf("Sum of digits of number:%d\n",sum);
            break;
    }
}