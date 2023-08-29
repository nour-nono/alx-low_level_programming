#include "main.h"
/**
 * print_chessboard - print characters
 * @a: 2d arr
 * Return: the pos of the character.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i = 0, j = 0;

	for (i = 0; i < 8; ++i)
	{
		for (j = 0; j < 8; ++j)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
