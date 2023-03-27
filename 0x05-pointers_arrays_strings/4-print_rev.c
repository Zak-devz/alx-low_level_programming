#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to a string
 *
 * Description: This function takes a pointer to a string as a parameter
 * and prints the string, in reverse, followed by a new line.
 */
void print_rev(char *s)
{
	int x = 0, i;

	while (*(s + x) != '\0')
	{
		x++;
	}
	for (i = x - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
