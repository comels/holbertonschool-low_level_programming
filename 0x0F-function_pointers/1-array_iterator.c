#include <stdio.h>
/**
 * array_iterator - fonction
 * @array: param
 * @size: param
 * @action: parm
 * Return: rien
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
