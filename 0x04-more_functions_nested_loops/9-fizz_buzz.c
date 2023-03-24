#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 *
 */

int main(void)
{
	int i;

    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            _putchar('F');
            _putchar('i');
            _putchar('z');
            _putchar('z');
            _putchar('B');
            _putchar('u');
            _putchar('z');
            _putchar('z');
            _putchar(' ');
        } else if (i % 3 == 0) {
            _putchar('F');
            _putchar('i');
            _putchar('z');
            _putchar('z');
            _putchar(' ');
        } else if (i % 5 == 0) {
            _putchar('B');
            _putchar('u');
            _putchar('z');
            _putchar('z');
            _putchar(' ');
        } else {
            int num = i;
            do {
                _putchar(num % 10 + '0');
                num /= 10;
            } while (num != 0);
            _putchar(' ');
        }
    }
    _putchar('\n');
    return 0;
}
