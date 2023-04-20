#include "3-calc.h"

/**
 * main - print simple operatois
 * @argc: The number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
	int n1, n2;

	char *cal;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	cal = argv[2];
	n2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*cal == '/' && n2 == 0) || (*cal == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(n1, n2));
	return (0);
