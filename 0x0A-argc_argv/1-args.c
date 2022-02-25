#include <stdio.h>
/**
 * main - fonction
 * @argc: param
 * @argv: param
 * Return: rien
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);
	return (0);
}
