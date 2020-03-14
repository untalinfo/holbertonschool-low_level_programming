#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * p_char - function that prints the chars
 * @list: list of elements of array
 * Return: None
 */
static void p_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * p_integer - function that prints the integer
 * @list: list of elements of array
 * Return: None
 */
static void p_integer(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * p_float - function that prints the float
 * @list: list of elements of array
 * Return: None
 */
static void p_float(va_list list)
{
	 printf("%f", va_arg(list, double));
}
/**
 * p_string - function that prints the strings
 * @list: list of elements of array
 * Return: None
 */
static void p_string(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s != NULL)
		printf("%s", s);
	else
	printf("(nil)");
}
/**
 * print_all - function that prints anything
 * @format: is a list of types of arguments passed to the function
 * Return: None
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i, j;
	char *cdn;
	op_t ops[] = {
		{"c", p_char},
		{"i", p_integer},
		{"f", p_float},
		{"s", p_string},
	};

	va_start(list, format);
	j = 0;
	cdn = "";

	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (i < 4 && format[j] != ops[i].op[0])
			i++;
		if (i < 4)
		{
			printf("%s", cdn);
			ops[i].f(list);
			cdn = ", ";
		}
		j++;
	}
	printf("\n");
	va_end(list);
}
