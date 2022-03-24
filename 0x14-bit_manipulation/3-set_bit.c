#include "main.h"

/**
* set_bit - fonction
* @n: param
* @index: param
* Return: int
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index == 0)
		return (-1);

	 *n |= (1 << index);
	 return (1);
}
