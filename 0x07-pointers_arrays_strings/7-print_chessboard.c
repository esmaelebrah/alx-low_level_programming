#include "main.h"

/**
 * print_chessboard - a function that prints a chessboard
 * @a: an array input to print
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	for (; i < 2; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
