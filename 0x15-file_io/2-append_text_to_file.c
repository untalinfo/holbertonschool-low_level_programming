#include <stdio.h>
#include "holberton.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer to file created
 * @text_content: pointer to string of content to append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int openf, writef;
	int len = 0;

	if (filename == NULL)
		return (-1);
	openf = open(filename, O_WRONLY | O_APPEND);
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
