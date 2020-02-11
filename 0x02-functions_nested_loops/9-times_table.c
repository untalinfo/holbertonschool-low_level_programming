#include "holberton.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: none.
 */

void times_table(void)
{
	int f, l;
	int r = 0;

	for (f = 0; f < 10; f++)
	{
		for (l = 0; l < 10; l++)
		{
			r = (f * l);
			if (r < 10)
			{
				if (l != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(r + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			if (l != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
