#include <stdio.h>
#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to file to be read
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t openf, readf, writef;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(*buff) * letters);
	if (buff == NULL)
		return (0);

	openf = open(filename, O_RDONLY);
	readf = read(openf, buff, letters);
	writef = write(STDOUT_FILENO, buff, readf);

	if (openf == -1 || readf == -1 || writef == -1)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(openf);
	return (writef);
}
