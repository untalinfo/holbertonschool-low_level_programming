#include <stdio.h>
#include "holberton.h"
/**
 * create_file - function that creates a file
 * @filename: pointer to file created
 * @text_content: pointer string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int openf, writef;
	int len = 0;

	if (filename == NULL)
		return (-1);
	openf = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (openf == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(openf);
		return (1);
	}
	while (text_content[len] != '\0')
		len++;
	writef = write(openf, text_content, len);
	if (writef == -1)
		return (-1);
	close(openf);
	return (1);
}
