#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: pointer to a string
 *
 * Description: This function takes a pointer to a string as a parameter
 * and prints the string, followed by a new line, to stdout.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
