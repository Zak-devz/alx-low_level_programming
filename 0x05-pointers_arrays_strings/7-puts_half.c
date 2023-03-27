#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: pointer to a string
 *
 * Description: This function takes a pointer to a string as a parameter
 * and prints the second half of the string, followed by a new line.
 * If the number of characters is odd, the function should print the last n
 * characters of the string, where n = (length_of_the_string - 1) / 2
 */
void puts_half(char *str)
{
	int len = 0, start = 0, i;

	while (*(str + len) != '\0')
	{
		len++;
	}
	start = (len % 2 == 0) ? len / 2 : (len - 1) / 2 + 1;
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
