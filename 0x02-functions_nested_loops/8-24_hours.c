#include "main.h" 

/**
 * jack_bauer - print every minute of the day of Jack Bauer
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar(hours / 10 + '0');
                        _putchar(hours % 10 + '0');
                        _putchar(':');
                        _putchar(minutes / 10 + '0');
                        _putchar(minutes % 10 + '0');
                        _putchar('\n');
		}
	}
}
