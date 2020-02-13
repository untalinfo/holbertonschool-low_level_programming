#include <stdio.h>

/**
 * main - funtion principal that prints number from 1 to 100
 * but for multibples of 3 print, multiples of 5 print buzz
 * and multiples 3 and 5 prints FizzBuzz
 * Returns: none.
 */
void main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
			printf("FizzBuzz");
		else if (num % 5 == 0)
			printf("Buzz");
		else if (num % 3 == 0)
			printf("Fizz");
		else
			printf("%d", num);
			printf(" ");
	}
	printf("\n");
}