#include "main.h"
/**
 * _isalpha - fonction
 * @c: caractere
 * Return: 0 ou 1
 */

int _isalpha(int c)
{
	if ((c < 123 && c > 96) || (c < 91 && c > 64))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
