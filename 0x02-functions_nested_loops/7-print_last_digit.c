#include "main.h"
/**
 * print_last_digit - fonction
 * @n: parametre
 * Return: 0
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + '0');
		return (-l);
	}
	else
	{
		-putchar(l + '0');
		return (l);
	}
	_putchar('\n');
}
