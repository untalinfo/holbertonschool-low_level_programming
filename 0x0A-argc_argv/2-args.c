#include <stdio.h>
/**
 * main - print the name.
 * @argc: number of argument
 * @argv: string of input argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
