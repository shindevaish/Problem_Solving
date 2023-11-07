#include<stdio.h>
int main(){
    int size;

    printf("Enter size of square matrix:");
    scanf("%d",&size);

    int arr[size][size];

    printf("Enter elements of matrix:\n");

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("element-[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Square matrix:\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
}
