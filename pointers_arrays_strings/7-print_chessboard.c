#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: pointer to a bidimensional array
 */
void print_chessboard(char (*a)[8])
{
	int black = 0;
	int white = 0;

	for (black = 0; black < 8; black++)
	{
		for (white = 0; white < 8; white++)
		{
			_putchar(a[black][white]);
		}
		_putchar(10);
	}
}
