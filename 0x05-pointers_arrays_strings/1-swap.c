#include "main.h"
/**
 * swap_int - fonction
 * Return: rien
 * @a: para 1
 * @b: para 2
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
