#include <stdio.h>

/**
 * main-Prints all sigle digit numbers of base 10
 * Return: 0
 */

int main(void)
{
	int i;
	
	i = '0';
	while (i <='9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
