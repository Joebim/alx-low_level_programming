#include "main.h"

/**
 *
 */

int main(void)
{
	int i;

    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            // Multiple of both 3 and 5
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
            // Multiple of 3
            _putchar('F');
            _putchar('i');
            _putchar('z');
            _putchar('z');
            _putchar(' ');
        } else if (i % 5 == 0) {
            // Multiple of 5
            _putchar('B');
            _putchar('u');
            _putchar('z');
            _putchar('z');
            _putchar(' ');
        } else {
            // Not a multiple of 3 or 5
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
