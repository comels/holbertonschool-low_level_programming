#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - fonction
 * @b: param
 * Return: rien
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == 0)
		exit(98);
	return (p);
}
