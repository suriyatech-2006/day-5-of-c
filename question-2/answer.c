// Hourglass Pattern
#include <stdio.h>

int main(void) {
    int n = 4;

    for (int i = n; i >= 1; i--) {
        for (int s = 0; s < n - i; s++) printf(" ");
        for (int j = 0; j < 2 * i - 1; j++) printf("* ");
        printf("\n");
    }

    for (int i = 2; i <= n; i++) {
        for (int s = 0; s < n - i; s++) printf(" ");
        for (int j = 0; j < 2 * i - 1; j++) printf("* ");
        printf("\n");
    }
    return 0;
}
