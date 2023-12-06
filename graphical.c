#include "stdio.h"
int main() {
    int n = 0;

    while (scanf("%d", &n) != EOF) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i || j == n - 1 - i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");

    }
}

  return 0;
}