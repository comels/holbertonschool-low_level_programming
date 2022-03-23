#include "main.h"
/**
 * print_times_table - fonction
 * @n: caractere
 * Return: rien
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n <= 15)
	{
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			if (b == 0)
			{
				_putchar('0');
			}
			else if (c >= 10)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else if ((c < 10) && (b != 0))
			{
				_putchar(' ');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
	}
}
