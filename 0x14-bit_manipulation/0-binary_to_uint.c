#include "holberton.h"
/**
 * binary_to_uint - function that converts a binary number to
 * an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: number conver or 0 if b that is not 1 or 0, or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		result = result << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			result = result | 1;
		b++;
	}
	return (result);
}
