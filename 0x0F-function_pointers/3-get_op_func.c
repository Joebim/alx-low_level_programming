#include "3-calc.h"
/**
 * get_op_func - selects function
 * @s: operator arguement
 * Return: pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	int num;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	num = 0;
	while (ops[num].op)
	{
		if (*(ops[num].op) == *s && !*(s + 1))
			return (ops[num].f);
		num++;
	}

	return (NULL);
}
