#include "holberton.h"

/**
 * puts2 - function prints every other character of a string
 * @str: pointer of the string in the main
 * Return: 0
 */
void puts2(char *str)
{
	int l, i = 0;

	while (str[l] != '\0')
		l++;
	l--;
	for (i = 0; i <= l; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
