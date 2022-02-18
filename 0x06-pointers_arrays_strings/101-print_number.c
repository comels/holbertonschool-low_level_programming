#include "main.h"
#include <stdio.h>
/**
 * print_number - fonction
 * @n: param
 * Return: rien
 */
void print_number(int n)
{
	unsigned int div = 1;

	if (n < 0)
	{
		_putchar(45);
		n = n * -1;
	}

	while (n / (div * 10) != 0)
	{
		div = div * 10;
	}

	while (div > 0)
	{
		_putchar((n / div) + 48);
		n = n % div;
		div = div / 10;
	}
}
