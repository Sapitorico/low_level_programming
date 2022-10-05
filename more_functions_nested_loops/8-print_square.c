#include "main.h"
/**
 * print_square - prints a square
 * @size: is the size of the square
 */
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)	/*paints the character on the x-axis and y-axis*/
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
