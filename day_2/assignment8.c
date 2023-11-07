#include<stdio.h>
int main(){
    int row,column;

    printf("Enter number of row of matrix:");
    scanf("%d",&row);
    printf("Enter number of column of matrix:");
    scanf("%d",&column);


    int arr[row][column];

    printf("Enter elements of matrix:\n");

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("element-[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Actual matrix:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of matrix:\n");
    for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
}