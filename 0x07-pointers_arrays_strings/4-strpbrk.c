#include "main.h"
/**
 * _strpbrk - fonction
 * @s: param
 * @accept : param
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (k == 1)
			break;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				k = 1;
		}
	}
	return (s + i - 1);
}
