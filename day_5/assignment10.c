/*Write a C Program to Display Characters and their ASCII values from A to Z
Using Loop*/

#include <stdio.h>

int main() {
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        printf("Character: %c\tASCII Value: %d\n", ch, ch);
    }

    return 0;
}
