#include "main.h"
/**
 * print_square - prints a square of size 'size' using the character '#'
 * @size: the size of the square
 *
 * This function prints a square of size 'size' using the character '#'.
 * If 'size' is 0 or less, the function prints only a new line.
 * The function uses only the _putchar function to print.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
