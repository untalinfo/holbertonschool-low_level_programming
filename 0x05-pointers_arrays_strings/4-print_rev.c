#include "holberton.h"

/**
 * print_rev - funtion that prints a string in reverse, follow by a new line
 * @s: pointer of the string s
 * Return: 0
 */
void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	while (l >= 0)
		_putchar(s[l--]);
	_putchar('\n');
}
