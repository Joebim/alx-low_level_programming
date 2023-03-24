#include "main.h"

/**
 * print_diagonal - print character diagonally
 */

void print_diagonal(int n) {
    if (n <= 0) {
        putchar('\n');
        return;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == i) {
                putchar('\\');
            } else {
                putchar(' ');
            }
        }
        putchar('\n');
    }
}
