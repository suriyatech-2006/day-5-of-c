// Pascal Triangle
#include <stdio.h>

int main(void) {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        int value = 1;

        for (int s = 0; s < rows - i - 1; s++)
            printf("  ");

        for (int j = 0; j <= i; j++) {
            printf("%4d", value);
            value = value * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}
