#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 *
 * @num: The number to print the last digit of
 *
 * Return: The value of the last
 */
int print_last_digit(int num)
{
	int last;

	if (num < 0)
	{
		num = -num;
	}
	last = num % 10;
	_putchar(last + '0');
	return (last);
}
