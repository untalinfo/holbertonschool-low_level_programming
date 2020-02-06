#include <stdio.h>
/**
 * main - prints out the aphabet in lowercase an the in uppercase
 * Return: 0
 */
int main(void)
{
	char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;
	char ltr;

	while (i < 52)
	{
		ltr = alpha[i];
		putchar(ltr);
		i++;
	}
	putchar('\n');
	return (0);
}
