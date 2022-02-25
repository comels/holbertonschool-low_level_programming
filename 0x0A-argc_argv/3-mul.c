#include <stdio.h>
#include <stdlib.h>
/**
 * main - fonction
 * @argc: param
 * @argv: param
 * Return: rien
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int mul = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	for (; i < argc; i++)
		mul *= atoi(argv[i]);
	printf("%d\n", mul);
	return (0);
}
