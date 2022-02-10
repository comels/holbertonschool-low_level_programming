#include "main.h"
/**
 * print_square - fonction
 * @size: param
 * Return: 0
 */
void print_square(int size)
{
	int line, colunn;

	for (line = 0; line < size; line++)
	{
		for (colunn = 0; colunn < size; colunn++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
