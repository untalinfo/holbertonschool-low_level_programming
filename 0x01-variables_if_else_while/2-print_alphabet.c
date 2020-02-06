#include <stdio.h>
/**
 * main - prints out the alphabet
 * Return: 0
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	char letter;

	while (i < 26)
	{
		letter = alphabet[i];
		putchar(letter);
		i++;
	}
	putchar('\n');
	return (0);
}
