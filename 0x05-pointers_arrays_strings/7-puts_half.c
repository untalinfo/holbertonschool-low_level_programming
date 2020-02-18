#include "holberton.h"

/**
 * puts_half - prints halt of a string
 * @str: pointer of the string
 * Return: 0
 */
void puts_half(char *str)
{
	int l, n = 0;

	while (str[l] != '\0')
		l++;
	if (l % 2 == 0)
		n = l / 2;
	else
		n = (l + 1) / 2;
	for (; str[n]; n++)
		_putchar(str[n]);
	_putchar('\n');
}
