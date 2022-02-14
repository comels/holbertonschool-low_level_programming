#include "main.h"
/**
 * puts_half - fonction
 * Return: rien
 * @str: para
 */
void puts_half(char *str)
{
	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i + 1) / 2;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
