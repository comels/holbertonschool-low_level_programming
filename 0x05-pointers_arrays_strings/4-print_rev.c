#include "main.h"
/**
 * print_rev - fonction
 * Return: rien
 * @s: param
 */
void print_rev(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (s[j] != '\0')
	{
		_putchar(s[i - j - 1]);
		j++;
	}
	_putchar('\n');
}
