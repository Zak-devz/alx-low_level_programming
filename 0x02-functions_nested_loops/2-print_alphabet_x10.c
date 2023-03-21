#include "main.h"
/**
 *print_alphabet_x10 - print alphabets 10 times
 *
 *Description: print_alphabet x10 to print a to z
 *
 *Return: return void
 *
 */

void print_alphabet_x10(void)
{
	char letter;
	int i;

	for  (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
