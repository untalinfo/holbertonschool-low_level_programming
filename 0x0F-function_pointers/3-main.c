#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that performs simple operations.
 * @argc: number of elements
 * @argv: array of arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int num1, num2;

	if (argc <= 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(argv[2]);
	if (f == 0)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	printf("%d\n", f(num1, num2));
	return (0);
}
