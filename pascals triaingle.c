#include<stdio.h>

void main() {
    int i, j, k, space;
    int rows = 5;

    for (i = 0; i <rows; i++) {
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        k = 1;
        for (j = 0; j <= i; j++) {
            printf("%d  ", k);
            k = k * (i - j) / (j + 1);
        }

        printf("\n");
    }
}
