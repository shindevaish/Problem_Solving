/*Write a program in C to find the sum of the left diagonals of a matrix.*/

#include<stdio.h>
int main(){
    int size,leftsum=0,rightsum=0;

    printf("Enter size of square matrix:");
    scanf("%d",&size);

    int arr[size][size];

    printf("Enter elements of matrix:\n");

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("element-[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
        rightsum += arr[i][i];
        leftsum += arr[i][size-i-1];
    }



    printf("Square matrix:\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    printf("LEFT DAIGONAL SUM:%d\n",leftsum);
    printf("RIGHT DIAGONAL SUM:%d\n",rightsum);
}
