#include "main.h"

/**
 * times_table - construct times table 9
 */

void times_table(void)
{
	int columns, rows, ops;

	for (columns = 0; columns <= 9; columns++)
	{
		for (rows = 0; rows <= 9; rows++)
		{
			ops = columns * rows;

			if (ops < 10)
			{
				if (rows > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(ops + '0');
			}
			else
			{
				if (rows > 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar(ops / 10 + '0');
				_putchar(ops % 10 + '0');
			}
		}
		_putchar('\n');
	}


}
