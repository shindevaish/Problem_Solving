/*Write a C program to find the commission on a salesman&#39;s total sales.
The commission on a salesman’s total sales is as follows: a) If sales &lt;100, then there
is no commission. b) If 100&gt;=sales &lt;=500, then commission = 10% of sales. c) If sales &gt;
500, then commission = 100+8% of sales above 500. Display details of salesman.*/

#include<stdio.h>
int main(){
    int sales;
    float commission;

    printf("Enter number of sales:");
    scanf("%d",&sales);

    if (sales<100){
        commission=0;
    }
    else if (sales>=100 && sales<=500){
        commission=0.1*sales;
    }
    else if (sales>500){
        commission=100 + 0.8*sales;
    }

    printf("Commission applied is:%f\n",commission);
    
    return 0;
}