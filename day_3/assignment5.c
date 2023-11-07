/*Write a Program to perform Linear Search by writing a user defined function to check
if an element is present in an array or not.*/

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

    int target;

    printf("Enter search value:");
    scanf("%d",&target);
    
    int result=search(arr,size,target);

    if (result != -1){
        printf("%d is found at position %d\n",target,result);
    }
    else{
        printf("%d is not found in the array.\n",target);
    }

    printf("%c",result);
    return 0;

}