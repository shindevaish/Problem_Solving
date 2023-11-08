/*Write a user defined function to convert all the upper case letters to lowercase and
lower case letters to upper case in a given string. Write appropriate main ( ) to
demonstrate the use of the function above defined.*/

#include<stdio.h>
int main(){
    char letter;
    
    printf("Enter a character:");
    scanf("%c",&letter);

    
    if (letter>='A' && letter<='Z'){
        letter+=32;
    }
    else if (letter>='a' && letter<='z'){
        letter-=32;
    }

    printf("Converted character:%c\n",letter);
    return 0;
}