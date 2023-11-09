/*WAP to print the following pattern [CO1]
E D C B A
 D C B A
  C B A
   B A
    A
*/

#include<stdio.h>
int main(){
    int row;
    char letter='A',ch;
    
    printf("Enter number of rows:");
    scanf("%d",&row);

    for (int i=0;i<row;i++){
        for (int j=0;j<i;j++){
            printf(" ");
        }

        for (char ch='A'+row-i-1;ch>='A';ch--){
            printf("%c ",ch);
        }
        printf("\n");
    }

    return 0;
}