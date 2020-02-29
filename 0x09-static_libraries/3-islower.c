#include "holberton.h"
/**
 * _islower - Check if a letter is lowercase of the alphabet.
 * @c: character.
 * Return: 1 if it is a lowercase letter, 0 if it is not a lowercase letter.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else
		return (0);
}
