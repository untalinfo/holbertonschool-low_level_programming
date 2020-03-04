#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * coin_count - check the code for Holberton School students.
 * @sum: count of arguments
 * @coin: coin
 *
 * Return: Always 0.
 */
int coin_count(int *sum, int coin)
{
	if (*sum / coin)
	{
		*sum -= coin;
		return (1);
	}
	return (0);
}

/**
 * main - check the code for Holberton School students.
 * @argc: count of arguments
 * @argv: vector with content of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int sum = 0, coin = 0, *pr;

	pr = &sum;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 1)
	{
		printf("0\n");
		return (0);
	}
	sum = atoi(argv[1]);
	while (sum > 0)
	{
		if (coin_count(pr, 25))
			coin++;
		else if (coin_count(pr, 10))
			coin++;
		else if (coin_count(pr, 5))
			coin++;
		else if (coin_count(pr, 2))
			coin++;
		else
			coin += (coin_count(pr, 1));
	}
	printf("%d\n", coin);
	return (0);
}
