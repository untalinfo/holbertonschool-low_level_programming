#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcode of own main function
 *
 * @argc: argument count
 * @argv: array of arguments
 * Return: 1 or 2 on fail, 0 on success
 */
int main(int argc, char *argv[])
{
	int bts, i;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bts = atoi(argv[1]);
	if (bts < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (unsigned char *)main;
	i = 0;
	if (bts > 0)
	{
		while (i < (bts - 1))
			printf("%02hhx ", ptr[i++]);
		printf("%hhx\n", ptr[i]);
	}
	return (0);
}
