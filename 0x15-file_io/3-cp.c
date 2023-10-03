#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * @argc:num of aruments
 *
 * @argv:num of aruments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int from=0, to =0;
	ssize_t num;
	char cont[1024];

	if (argc != 3 )
		dprintf(STDERR_FILENO,"Usage: cp file_from file_to\n"), exit(97);
	from = open(argv[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit (98);
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit (99);
	while ((num = read(from, cont, 1024)) > 0)
		if (write(to, cont, num) != num)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit (99);
	if (num == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit (98);
	close(from);
	close(to);
	if (from)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from), exit (100);
	if (to)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to), exit (100);
	return (EXIT_SUCCESS);
}
