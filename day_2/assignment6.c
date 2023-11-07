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