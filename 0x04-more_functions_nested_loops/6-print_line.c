#include "main.h"
/**
 * print_line - Draws a straight line in the terminal.
 *
 * @n: The number of times the character _ should be printed.
 *
 * Return: void.
 *
 * Description: This function prints the character _ n times in the
 *              terminal, followed by a newline character \n. It can
 *              only use the _putchar() function to print. If n is 0
 *              or less, the function only prints the newline character.
 */
void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		if (n >= 1)
		{
			_putchar('_');
		}
		else
		{
			_putchar('\n');
		}
		i++;
	}
	_putchar('\n');
}
