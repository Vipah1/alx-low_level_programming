#include "search_algos.h"
/**
 * linear_search - Function searches for a value in an
 * array of integers using the Linear search algorithm
 * @array: Array is a pointer to first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for in the array
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; (i < size) && (array); i++)
	{
		if (*(array + i) == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
			return (i);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
		}
	}
	return (-1);
}
