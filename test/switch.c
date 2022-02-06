#include <stdio.h>
/**
 * main - fonction
 * Return: 0
 */

int main(void)
{
	int age = 115;

	switch (age)
	{
	case 0:
		printf("Tu as 0 an.\n");
		break;
	case 15:
		printf("Tu as 15 ans.\n");
		break;
	default:
		printf("Tu n'as ni 0 ni 15 ans.\n");
		break;
	}
	return (0);

	/* int age = 37;
	 * (age == 15) ? printf("15 ans.\n") : printf("Pas 15 ans.\n");
	 * return (0);
	 */
}
