/*Write a c program to calculate Electricity Bill. Given an integer U denoting the
amount of KWh units of electricity consumed, the task is to calculate the
electricity bill with the help of the below charges:
1 to 100 units – Rs. 10/unit
100 to 200 units – Rs. 15/unit
200 to 300 units – Rs. 20/unit
above 300 units – Rs. 25/unit*/

#include<stdio.h>
int main(){
    int unit,total;

    printf("Enter unit:");
    scanf("%d",&unit);

    if (unit>1 && unit<100){
        total=unit*10;
    }else if (unit>100 && unit<200){
        total=unit*15;
    }else if (unit>200 && unit<300){
        total=unit*20;
    }else if (unit>300){
        total=unit*25;
    }
    else{
        total=0;
    }

    printf("Total electricity bill:%d\n",total);
}