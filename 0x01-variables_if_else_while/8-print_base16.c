#include <stdio.h>

/**
 * main-Write program prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char nbase16[16] = "0123456789abcdef";
	char num16;

	while (i < 16)
	{
		num16 = nbase16[i];
		putchar(num16);
		i++;
	}
	putchar('\n');
	return (0);
}
