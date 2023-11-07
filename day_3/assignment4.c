/*Write a program to take 10 elements in an array and replace all even numbers to 1
and
all odd numbers to 0.*/

#include<stdio.h>
int main(){
    int size;

    printf("Enter size of array:");
    scanf("%d",&size);

    int arr[size];
    printf("Enter elements of array:");
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<size;i++){
        if (arr[i]%2==0){
            arr[i]=1;
        }
        else{
            arr[i]=0;
        }
    }
    
    printf("New array:");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;

}