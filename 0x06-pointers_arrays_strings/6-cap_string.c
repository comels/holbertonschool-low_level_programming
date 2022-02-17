#include "main.h"
/**
 * cap_string - fonction
 * @s: The string
 *
 * Return: s
 */
char *cap_string(char *s)
{
	int i;
	int j = 1;

	for (i = 0; s[i] != 0; i++)
	{

		if (j == 1 && s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}

		if (
			s[i] == ' ' ||
			s[i] == '\t' ||
			s[i] == '\n' ||
			s[i] == ',' ||
			s[i] == ';' ||
			s[i] == '.' ||
			s[i] == '!' ||
			s[i] == '?' ||
			s[i] == '"' ||
			s[i] == '(' ||
			s[i] == ')' ||
			s[i] == '{' ||
			s[i] == '}')
			j = 1;
		else
			j = 0;
	}

	return (s);
}
