#include "main.h"

/**
 * print_chessboard - Uses array of arrays to prints a chess board look alike.
 * @a: Pointer to arrays containing each a piece of the board.
 *
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	int count1, count2;

	count1 = 0;
	while (count1 < 8)
	{
		count2 = 0;
		while (count2 < 8)
		{
			_putchar(a[count1][count2]);
			count2++;
		}
		_putchar('\n');

		count1++;
	}
}
