#include<stdio.h>
int main(){
    int size,temp;

    printf("Enter size of matrix:");
    scanf("%d",&size);

    int arr[size];

    printf("Enter elements of matrix:\n");

    for(int i=0;i<size;i++){
        printf("element-[%d] : ",i);
        scanf("%d",&arr[i]);
    }

    for(int i=1;i<size;i++){
      temp=arr[i];
      int j=i-1;
      while((temp<arr[j])&&(j>=0)){
         arr[j+1]=arr[j];
         j=j-1;
      }
      arr[j+1]=temp;
   }

    
    printf("After arranging the array in ascending order:\n");
    for(int i=0;i<size;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
}