#include "holberton.h"
/**
 * _strncat - concatenates tow strings
 * @dest: destine de result
 * @src: this is the source
 * @n: bytes from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int lf, ls;

	for (lf = 0; dest[lf] != '\0'; lf++)
		;
	for (ls = 0; ls < n && src[ls] != '\0'; ls++)
		dest[lf + ls] = src[ls];
	dest[lf + ls] = '\0';
	return (dest);
}
