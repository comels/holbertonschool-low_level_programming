#include "main.h"
/**
 * print_line - fonction
 * @n: param
 * Return: rien
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar(95);
		n--;
	}
	_putchar('\n');
}
