#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: the number of times the character '\' should be printed
 *
 * Description: If n is 0 or less, the function should only print a '\n'
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (n >= 1)
		{
			_putchar('\\');
			_putchar('\n');
			for (j = 0; j <= i; j++)
			{
				_putchar(' ');
			}
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
