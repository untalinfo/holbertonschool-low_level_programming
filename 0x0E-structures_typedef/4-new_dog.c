#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - copies the string
 * @dest: destiny of the copy
 * @src: source
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * _strlen - function that returns the length of a string
 * @s: is the pointer
 * Return: length of a string
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
/**
 * new_dog - function that creates a new dog
 * @name: name of new dog
 * @age: age of the dog
 * @owner: owner
 *
 * Return: pointer to.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;/* new dog*/
	int len1 = 0, len2 = 0;/* lenht of name and owner*/
	char *n_name, *n_owner;/* pointers to new name and owner*/

	len1 = _strlen(name);
	len2 = _strlen(owner);

	n_name = malloc(len1 + 1);
	if (n_name == NULL)
		return (NULL);

	n_owner = malloc(len2 + 1);
	if (n_owner == NULL)
		return (NULL);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		free(n_name);
		free(n_owner);
		return (NULL);
	}

	_strcpy(n_name, name);
	_strcpy(n_owner, owner);

	ndog->name = n_name;
	ndog->age = age;
	ndog->owner = n_owner;

	return (ndog);
}
