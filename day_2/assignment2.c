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