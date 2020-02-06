#include <stdio.h>

/**
 * main-Prints all sigle digit numbers of base 10
 * Return: 0
 */

int main(void)
{
	int i = 0;
	char numbers[10] = "0123456789";
	char num;

	while (i < 10)
	{
		num = numbers[i];
		putchar(num);
		i++;
	}
	putchar('\n');
	return (0);
}
