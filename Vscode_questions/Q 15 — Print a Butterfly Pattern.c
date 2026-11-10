
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Upper half
    for (int i = 1; i <= (n + 1) / 2; i++) {

        // Left wing
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        // Middle space
        printf(" ");

        // Right wing
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower half
    for (int i = (n - 1) / 2; i >= 1; i--) {

        // Left wing
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        // Middle space
        printf(" ");

        // Right wing
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
