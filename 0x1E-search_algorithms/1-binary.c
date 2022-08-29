#include "search_algos.h"
/**
* binary_search - function that searches for a value in a sorted
* array of integers using the Binary search algorithm.
* @array: pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
* Return: first index where value is located or -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t medium;
	size_t left = 0;
	size_t right = size - 1;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");
		medium = left + (right - left) / 2;
		/** Check if value is present at mid */
		if (array[medium] == value)
			return (medium);
		/** If value greater, ignore left half */
		if (array[medium] < value)
			left = medium + 1;
		/** If value smaller, ignore right half */
		else
			right = medium - 1;
	}
	return (-1);
}
