#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - function that prints all natural
 * numbers from n to 98.
 * @n: input number to check
 * Return: none.
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
				printf("%d", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
				printf("%d", i);
		}
	}
	else
		printf("%d", n);
	printf("\n");
}
