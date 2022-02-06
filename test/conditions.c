#include <stdio.h>
/**
 * main - fonction
 * Return: 0
 */

int main(void)
{
	/**
	 * == : égal à
	 * != : différent de
	 * <  : plus petit que
	 * <= : plus petit ou égal à
	 * && : ET
	 * || : OU
	 * !  : NOT
	 */
	int age = 115;

	if (age < 0)
	{
		printf("Tu n'es pas né.\n");
	}
	else if (age >= 1 && age <= 100 || age == 115)
	{
		printf("Tu as âge compris entre 1 et 100 ans.\n");
	}
	else
	{
		printf("Tu as plus de 100 ans.\n");
	}
	return (0);
}
