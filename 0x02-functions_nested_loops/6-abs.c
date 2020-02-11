#include "holberton.h"
/**
 * _abs - calculate the absolute value of the number from zero.
 * @x: the integer
 * Return: absolute value of the input number.
 */
int _abs(int x)
{
	if (x < 0)
		x = x * -1;
	return (x);
}
