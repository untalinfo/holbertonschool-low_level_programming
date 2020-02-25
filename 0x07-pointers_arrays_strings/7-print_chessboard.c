#include "holberton.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a:
 *
 * Return: None
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (a[i][0] != '\0')
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
