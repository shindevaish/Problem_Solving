/*Accept the salary of an employee from the user. Calculate the gross salary on the
following basis:
Basic                HRA     DA
Less than 4000       10%     50%
4001 - 8000          20%     60%
8001 - 12000         25%     70%
12000 &amp; ABOVE    30%     80%*/

#include<stdio.h>
int main(){
    double g_salary, hra, da;
    int salary;

    printf("Enter salary of the employee:");
    scanf("%d",&salary);

    if(salary<=4000){
        hra=0.1;
        da=0.5;
    }else if(salary>4000 && salary<=8000){
        hra=0.2;
        da=0.6;
    }else if(salary>8000 && salary<=12000){
        hra=0.25;
        da=0.7;
    }else if(salary>12000){
        hra=0.3;
        da=0.8;
    }

    g_salary=salary + hra*salary + da*salary;
    printf("Gross Salary is %lf\n",g_salary);
}