#include "main.h"
#include <stdio.h>
/**
 * @a: param
 * @size: param
 * Return: rien
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum = 0;

	for (i = 0; i < (size * size); i += (size + 1))
	{
		sum = sum + a[i];
	}
	printf("%d, ", sum);

	sum = 0;

	for (i = size - 1; i < (size * size - 1); i += (size - i))
	{
		sum = sum + a[i];
	}
	printf("%d\n", sum);
}
