#include "main.h"
/**
 * leet - fonction
 * @s: param
 * Return: s
 */
char *leet(char *s)
{
	int i;
	int j;
	int min[] = {97, 101, 111, 116, 108};
	int maj[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == min[j] || s[i] == maj[j])
				s[i] = num[j];
		}
	}
	return (s);
}
