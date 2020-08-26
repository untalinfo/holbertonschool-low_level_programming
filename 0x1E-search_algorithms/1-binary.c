#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: is the value to search
 * Return: the index where value is located or If value is not present
 * in array or if array is NULL, your function must return -1
 */
int binary_search(int *array, size_t size, int value)
{
	int m, i;
	int left = 0;
	int rigth = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= rigth)
	{
		m = left + (rigth - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= rigth; i++)
			if (i == rigth)
				printf("%i\n", array[i]);
			else
				printf("%i, ", array[i]);

		if (array[m] == value)
			return (m);
		if (array[m] < value)
			left = m + 1;
		else
			rigth = m - 1;
	}
	return (-1);
}
