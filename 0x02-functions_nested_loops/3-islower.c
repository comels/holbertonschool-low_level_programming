#include "main.h"
/**
 * _islower - fonction
 * @c: caractere
 * Return: 0 ou 1
 */

int _islower(int c)
{
	if (c < 123 && c > 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
