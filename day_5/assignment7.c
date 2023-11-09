/*Write a C program to Search the element 23 is present in the array or not. If
present print the location of search element
2 5 8 12 16 23 38 56 72 91*/

#include<stdio.h>
int search(int arr[],int size,int target){
    for (int i=0;i<size;i++){
        if (arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int size;

    printf("Enter size of array:");
    scanf("%d",&size);

    int arr[size];
    printf("Enter elements of array:");
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int target,result;

    printf("Enter search value:");
    scanf("%d",&target);
    
    for (int i=0;i<size;i++){
        if (arr[i]==target){
            printf("Target value is found at position %d\n",i);
        }
    }

    return 0;

}