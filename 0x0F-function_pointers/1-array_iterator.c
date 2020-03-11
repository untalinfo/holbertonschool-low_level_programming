#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executer a function give as a parameter on
 * each element of an arrya
 * @array: the array of elements
 * @size: size of the array
 * @action: is a pointer to the function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
