#include "holberton.h"

int _strlen_recursion(char *s);
int pldm(char *x, char *y);
/**
 * is_palindrome - function checks if string is a palindrome
 * @s: pointer to string
 * Return: 1 if is a palindrome, otherwise return 0
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	char *x = s;
	char *y = s + (len - 1);

	if (len == 0)
		return (1);
	return (pldm(x, y));
}
/**
 * pldm - function that scan character string
 * @x: character
 * @y: character
 * Return: a int character at given point
 */
int pldm(char *x, char *y)
{
	if (*x != *y)
		return (0);
	else if (x >= y)
		return (1);
	else
		return (pldm(x + 1, y - 1));
}
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer to string
 * Return: lenght of a string
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		n = _strlen_recursion(s + 1);
		n++;
	}
	return (n);
	}

