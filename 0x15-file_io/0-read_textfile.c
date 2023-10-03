#include "main.h"
/**
 * read_textfile - reading from another file
 * @filename: file location and name
 * @letters: bytes
 * Return: Always 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num = 0;
	int fl;
	char words[10000];

	if (!filename || !letters)
		return (0);
	fl = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);
	num = read(fl, words, letters);
	num = write(STDOUT_FILENO, words, num);
	close(fl);
	return (num);
}
