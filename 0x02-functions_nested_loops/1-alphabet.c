#include "main.h"
/**
 *print_alphabet - print alphabets
 *
 *Description: print_alphabet use to print a to z
 *
 *Return: return void
 *
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
