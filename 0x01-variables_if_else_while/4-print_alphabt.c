#include <stdio.h>
/**
 * main - prints out the alphabet except q and e
 * Return: 0
 */
int main(void)
{
	char alphaex[24] = "abcdfghijklmnoprstuvwxyz";
	int i = 0;
	char ltrex;

	while (i < 24)
	{
		ltrex = alphaex[i];
		putchar(ltrex);
		i++;
	}
	putchar('\n');
	return (0);
}
