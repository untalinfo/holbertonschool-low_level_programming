#include "holberton.h"
/**
 * _strcat - concatenates tow strings
 * @dest: destine de result
 * @src: this is the source
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int lf, ls;

	for (lf = 0; dest[lf] != '\0'; lf++)
		;
	for (ls = 0; src[ls] != '\0'; ls++)
		dest[lf + ls] = src[ls];
	dest[lf + ls] = '\0';
	return (dest);
}
