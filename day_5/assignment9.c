/*Write a menu driven C program which will accept any number and depending on
the user choice code will perform the following.
Choice Code Action
1 Find Smallest digit among the number
2 Check for Armstrong number
3 Exit with error message*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, choice;

    printf("Menu:\n");
    printf("1. Find Smallest digit among the number\n");
    printf("2. Check for Armstrong number\n");
    printf("3. Exit\n");

    printf("Enter your choice (1, 2, or 3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &num);

            int smallestDigit = 9;

            while (num > 0) {
                int digit = num % 10;
                if (digit < smallestDigit) {
                    smallestDigit = digit;
                }
                num /= 10;
            }

            printf("Smallest digit: %d\n", smallestDigit);
            break;

        case 2:
            printf("Enter a number: ");
            scanf("%d", &num);

            int originalNum, remainder, result = 0, n = 0;

            originalNum = num;

            while (originalNum != 0) {
                originalNum /= 10;
                ++n;
            }

            originalNum = num;

            while (originalNum != 0) {
                remainder = originalNum % 10;

                int temp = 1;
                for (int i = 0; i < n; i++) {
                    temp *= remainder;
                }
                result += temp;

                originalNum /= 10;
            }

            if (result == num) {
                printf("%d is an Armstrong number.\n", num);
            } else {
                printf("%d is not an Armstrong number.\n", num);
            }
            break;

        case 3:
            printf("Exiting the program with an error message.\n");
            return 1;

        default:
            printf("Invalid choice. Please enter 1, 2, or 3.\n");
            break;
    }

    return 0;
}
