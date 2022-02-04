#include <stdio.h>
/**
 * main - all
 * Return: 0
 */

int main(void)
{
	int a = 48;

	while (a < 58)
	{	putchar(a);
		a++;
		if (a != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
