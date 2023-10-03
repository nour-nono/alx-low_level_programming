#include "main.h"

/**
 *  _strlen - Entry point
 *
 * @s: is a pointer
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		++i;
	}
	return (i / sizeof(char));
}
/**
 * create_file - Entry point
 *
 * @filename: is a pointer
 *
 * @text_content: is a pointer
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
*/
int create_file(const char *filename, char *text_content)
{
	ssize_t length = _strlen(text_content), num = 0;
	int fl = 0;

	if (!filename)
		return (-1);
	fl = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fl == -1)
		return (-1);
	if (length)
	{
		num = write(fl, text_content, length);
	}
	close(fl);
	if (num == length)
		return (1);
	else
		return (-1);
}
