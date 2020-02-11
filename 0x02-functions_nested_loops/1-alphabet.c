#include "holberton.h"
/**
 * print_alphabet - program that writes the alphabet from a-z
 *
 * Return: None.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
