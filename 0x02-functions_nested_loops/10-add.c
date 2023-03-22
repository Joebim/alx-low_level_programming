#include "main.h"

/**
 *
 */

int add(int a, int b)
{
	/* Check if both numbers are negative */
    if (a < 0 && b < 0) {
        return _(abs(a) + _abs(b));
    }

    /* Check if only one number is negative */
    if (a < 0) {
        return b - _abs(a);
    } else if (b < 0) {
        return a - _abs(b);
    }

    /* If both numbers are positive, just add them together */
    return a + b;
}
