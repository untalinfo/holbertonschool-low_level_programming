#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the multiplie tow numbers
 * @argc: number of argument
 * @argv: string of input argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		printf("Error\n");
	else
		printf("%d\n",  atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
