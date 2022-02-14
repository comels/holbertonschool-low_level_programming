#include "main.h"
/**
 * _strlen - fonction
 * Return: i
 * @s: para
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
