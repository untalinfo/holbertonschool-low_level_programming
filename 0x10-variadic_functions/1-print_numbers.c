#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers.
 * @separator: is the string to be printed between numbers
 * @n: is the number os integers passed to the function
 * Return: None
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start (list, n);

	for (i = 0; i != n; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator != NULL && i != n-1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
