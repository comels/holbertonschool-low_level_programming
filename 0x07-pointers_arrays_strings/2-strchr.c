#include "main.h"
/**
 * _strchr - fonction
 * @s: param
 * @c: param
 * Return: return
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
