#include "holberton.h"
#include <stdio.h>
/**
 * main - copy the content of one file to another
 * @ac: argument count
 * @av: argument pointer
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int openf1, openf2, writef, len;
	char buf[BUFFERSIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	if (av[1] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (av[2] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	openf1 = open(av[1], O_RDONLY);
	if (openf1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	openf2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (openf2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	writef = len = 1;
	while (len)
	{
		len = read(openf1, buf, BUFFERSIZE);
		if (len == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (len > 0)
		{
			writef = write(openf2, buf, len);
			if (writef == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	writef = close(openf1);
	if (writef == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", openf1), exit(100);
	writef = close(openf2);
	if (writef == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", openf2), exit(100);
	return (0);
}
