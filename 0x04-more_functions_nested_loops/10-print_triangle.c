#include "main.h"
/**
 * print_triangle - prints a triangle of size 'size' using the character '#'
 * @size: the size of the triangle
 *
 * This function prints a triangle of size 'size' using the character '#'.
 * If 'size' is 0 or less, the function prints only a new line.
 * The function uses only the _putchar function to print.
 */
void print_triangle(int size)
{
	int x, y, k, w, t;

	w = 1;
	t = size;
	if (size <= 0)
		_putchar('\n');
	for (y = 0; y < size; y++)
	{
		for (x = 0; x < (t - 1); x++)
			_putchar(' ');
		for (k = 0; k < w; k++)
			_putchar('#');
		_putchar('\n');
		t--;
		w++;
	}
}
