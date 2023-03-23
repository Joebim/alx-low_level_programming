#include "main.h"

/**
 *
 */

int _isupper(int c)
{
	if (c >= 'A')
	{
		return (1);
	} else if (c <= 'z')
	{
		return (0);
	}
	return (0);
}
