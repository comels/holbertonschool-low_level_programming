#include "main.h"
/**
 * cap_string - fonction
 * @s: param
 * Return: s
 */
char *cap_string(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 58 && s[i] > 47)
			s[i] = s[i];

		else if (s[i] == 9)
			s[i] = 32;

		else if (s[i] < 94 && s[i] > 64)
			s[i] = s[i];

		else if (s[i] < 123 && s[i] > 96)
			s[i] = s[i];

		else
			if (s[i + 1] != '\0' && s[i + 1] < 123 && s[i + 1] > 96)
				s[i + 1] -= 32;
	}
	return (s);
}
