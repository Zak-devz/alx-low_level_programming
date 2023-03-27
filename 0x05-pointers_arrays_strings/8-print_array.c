#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to array of integers
 * @n: number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i, j;
	int num, digits;
	int temp, pow10;
	int digit;

	for (i = 0; i < n; i++)
	{
		num = a[i];
		digits = 0;
		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}
		temp = num;
		do {
			digits++;
			temp /= 10;
		} while (temp != 0);
		temp = digits;
		while (temp > 1)
		{
			pow10 = 1;
			for (j = 0; j < temp - 1; j++)
				pow10 *= 10;
			digit = num / pow10;
			_putchar(digit + '0');
			num %= pow10;
			temp--;
		}
		_putchar(num + '0');
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
