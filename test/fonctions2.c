#include <stdio.h>
/**
 * main - fonction
 * Return: 0
 */

void bonjour(void)
{
	printf("Bonjour !\n");
}

int maximum(int a, int b)
{
	int max;

	if (a > b)
		max = a;
	else
		max = b;
	return (max);
}

int main(void)
{
	int a;
	int b;

	bonjour();

	printf("Première valeur : ");
	scanf("%d", &a);

	printf("Deuxième valeur : ");
	scanf("%d", &b);

	printf("Maximum entre %d et %d : %d\n", a, b, maximum(a, b));
	return (0);
}
