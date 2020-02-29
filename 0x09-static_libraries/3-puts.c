#include "holberton.h"

/**
 * _puts - funtion that prints a string, follow by a new line
 * @str: pointer of the string str
 * Return: 0
 */
void _puts(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
