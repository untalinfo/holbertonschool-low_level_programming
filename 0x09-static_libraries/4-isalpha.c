#include "holberton.h"
/**
 * _isalpha - tests whether a character is from
 * the alphabet lowercase and uppercase.
 * @c: character.
 * Return: 1 if the character is an  character of the aphabet.
 * 0 if the character is not an character of the alphabet.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
