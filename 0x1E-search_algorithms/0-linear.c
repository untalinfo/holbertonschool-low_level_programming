#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: is the value to search
 * Return: first index where value is located, If value is not
 * present in array or if array is NULL, your function must return -1
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
