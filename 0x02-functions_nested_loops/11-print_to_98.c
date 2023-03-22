#include "main.h"

/**
 *
 */

void print_to_98(int n)
{
	 for (; n != 98; n < 98 ? n++ : n--) {
        _putchar(n);
        _putchar(',');
        _putchar(' ');
    }
    _putchar(98);
}
