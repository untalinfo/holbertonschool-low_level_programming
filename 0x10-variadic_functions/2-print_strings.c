#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings.
 * @separator: is the string to be printed between numbers
 * @n: is the number os integers passed to the function
 * Return: None
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *cdn;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i != n; i++)
	{
		cdn = va_arg(list, char*);
		if (cdn != NULL)
			printf("%s", cdn);
		else
			printf("(nil)");
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
