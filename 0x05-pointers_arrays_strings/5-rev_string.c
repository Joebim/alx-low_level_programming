#include "main.h"
#include <string.h>

/**
 * rev_string - Print a given string in reverse
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int j;
	int last_num = strlen(s);

	for (j = 0; j < last_num / 2; j++)
	{
		char rev_string = s[j];

		s[j] = s[last_num - 1 - j];
		s[last_num - 1 - j] = rev_string;
	}
}
