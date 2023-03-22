#include "main.h"
#include <stdio.h>
/**
 *
 */

void print_digit(int d) {
    putchar(d + '0');
}

void print_number(int n) {
    if (n < 0) {
        putchar('-');
        n = -n;
    }
    if (n >= 10) {
        print_number(n / 10);
    }
    print_digit(n % 10);
}

void print_to_98(int n) {
	int i;
	
	if (n <= 98) {
        for (i = n; i < 98; i++) {
            print_number(i);
            putchar(',');
            putchar(' ');
        }
    } else {
        for (i = n; i > 98; i--) {
            print_number(i);
            putchar(',');
            putchar(' ');
        }
    }
    print_number(98);
    putchar('\n');
}
