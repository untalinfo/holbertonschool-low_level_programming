#include <stdio.h>
/**
 * main - prints the numbers from 00 to 99
 * Return: 0
 */
int main(void)
{
	int x, z;

	x = '0';
	z = '0';

	while (x <= '9')
	{
		while (z <= '9')
		{
			putchar(x);
			putchar(z);
			if (z == '9' && x == '9')
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			z++;
		}
		if (z >= '9')
		{
			z = '0';
		}
		x++;
	}
	return (0);
}
