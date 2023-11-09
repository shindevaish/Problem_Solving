/*Write a C Program using Insertion Sort and Selection Sort. Create a vector(1-D
Array)
storing N integers in ascending or descending sequence. The User will choose the
order
before proceeding for sorting*/

#include <stdio.h>

int main() {
    int N;

    printf("Enter the number of elements in the vector: ");
    scanf("%d", &N);

    int vector[N];

    printf("Enter the elements of the vector:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &vector[i]);
    }

    int order;
    printf("Choose the sorting order (1 for ascending, 2 for descending): ");
    scanf("%d", &order);

    for (int i = 1; i < N; i++) {
        int key = vector[i];
        int j = i - 1;

        while (j >= 0 && (order == 1 ? vector[j] > key : vector[j] < key)) {
            vector[j + 1] = vector[j];
            j = j - 1;
        }
        vector[j + 1] = key;
    }

    printf("Vector after Insertion Sort:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");

    for (int i = 0; i < N; i++) {
        vector[i] = i + 1;
    }

    for (int i = 0; i < N - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < N; j++) {
            if (order == 1 ? vector[j] < vector[minIndex] : vector[j] > vector[minIndex]) {
                minIndex = j;
            }
        }

        int temp = vector[minIndex];
        vector[minIndex] = vector[i];
        vector[i] = temp;
    }

    printf("Vector after Selection Sort:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");

    return 0;
}
