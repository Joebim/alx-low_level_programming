#include "main.h"
#include <stdio.h>

/**
 *
 */

void print_diagonal(int n) {
	if (n <= 0) {
		_putchar('\n');
		return;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == i) {
				_putchar('\\');
			} else {
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
