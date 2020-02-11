#include "holberton.h"
/**
  * print_alphabet_x10 - repeats the print_alphabet 10 times.
  * Return: None.
  */
void print_alphabet_x10(void)
{
	int x;
	char c;
	
	for(x = 0; x < 10; x++)
	{
		for(c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
