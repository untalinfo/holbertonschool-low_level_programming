#include <stdio.h>

/**
 * main-Write program print all possible combinations of single-digit numbers.
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char numbers[32] = "0, 1, 2, 3, 4, 5, 6, 7, 8, 9";
	char num;

	while (i < 32)
	{
		num = numbers[i];
		putchar(num);
		i++;
	}
	putchar('\n');
	return (0);
}
