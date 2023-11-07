/*Write a program in C to separate odd and even integers into separate arrays.
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 25
element - 1 : 47
element - 2 : 42
element - 3 : 56
element - 4 : 32
Expected Output :
The Even elements are :
42 56 32
The Odd elements are :
25 47*/

#include<stdio.h>
int main(){
    int size;

    printf("Enter size of array:");
    scanf("%d",&size);

    int arr[size];
    int evenarr[100], oddarr[100];
    int evencount = 0, oddcount = 0;

    printf("Enter elements of array:\n");

    for(int i=0;i<size;i++){
        printf("element-[%d] : ",i);
        scanf("%d",&arr[i]);

        if (arr[i]%2==0){
            evenarr[evencount]=arr[i];
            evencount++;
        }
        else{
            oddarr[oddcount]=arr[i];
            oddcount++;
        }
    }

    printf("Even integers: ");
    for (int i = 0; i < evencount; i++) {
        printf("%d ", evenarr[i]);
    }

    printf("\nOdd integers: ");
    for (int i = 0; i < oddcount; i++) {
        printf("%d ", oddarr[i]);
    }

    printf("\n");
}
