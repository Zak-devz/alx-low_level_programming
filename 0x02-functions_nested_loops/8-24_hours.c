#include "main.h"
/**
 * jack_bauer - Prints every minute of the day, from 00:00 to 23:59
 *
 * Description: This function prints the time in the format "hh:mm" for every
 * minute of the day of Jack Bauer, starting from 00:00 to 23:59. The output is
 * printed to the standard output.
 */
void jack_bauer(void)
{
	int hour, min;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
		}
	}
}
