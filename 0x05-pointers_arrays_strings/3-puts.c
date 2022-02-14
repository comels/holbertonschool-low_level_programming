#include "main.h"
/**
 * _puts - fonction
 * Return: rien
 * @str: param
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
