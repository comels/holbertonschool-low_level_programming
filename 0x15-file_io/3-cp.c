#include "main.h"

/**
* main - fonction
* @argc: para
* @argv: para
* Return: int
*/

int main(int argc, char **argv)
{
	int openfrom, opento, r, w;
	char str[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	if ((openfrom = open(argv[1], O_RDONLY)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if ((opento = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664)) == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((r = read(openfrom, str, 1024)) > 0)
	{
		if ((w = write(opento, str, r)) == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if ((closefrom = close(openfrom)) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", openfrom), exit(100);

	if ((closeto = close(opento)) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", opento), exit(100);
	return (0);
}
