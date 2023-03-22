#include "main.h"
#include <stdio.h>
/**
 *
 */

void print_number(int n) {
    if (n >= 10) {
        print_number(n / 10);
    }
    putchar(n % 10 + '0');
    putchar(',');
    putchar(' ');
}

void print_to_98(int n) {
    int i;

    if (n <= 98) {
        for (i = n; i < 98; i++) {
            print_number(i);
        }
    } else {
        for (i = n; i > 98; i--) {
            print_number(i);
        }
    }

    print_number(98);
    putchar('\n');
}
