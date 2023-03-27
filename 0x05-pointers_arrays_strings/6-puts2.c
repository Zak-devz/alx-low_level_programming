#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: pointer to a string
 *
 * Description: This function takes a pointer to a string as a parameter
 * and prints every other character of the string, starting with the first
 * character, followed by a new line.
 */
void puts2(char *str)
{
	int length = 0, i = 0;

	while (*(str + length) != '\0')
	{
		length++;
	}
	while (i < length)
	{
		_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n');
}
