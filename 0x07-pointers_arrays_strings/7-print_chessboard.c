#include "main.h"

/**
 * print_chessboard - a function that prints a chessboard
 * @a: an array input to print
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int y , z;

	for (y = 0; a[y][7]; y++)
	{
		for (z = 0; z < 8; z++)
		       _putchar(a[y][z]);

	_putchar('\n');
	}
}	
