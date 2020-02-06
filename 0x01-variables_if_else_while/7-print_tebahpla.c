#include <stdio.h>

/**
 * main-Write program prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char alphar[26] = "zyxwvutsrqponmlkjihgfedcba";
	char lt;

	while (i < 26)
	{
		lt = alphar[i];
		putchar(lt);
		i++;
	}
	putchar('\n');
	return (0);
}
