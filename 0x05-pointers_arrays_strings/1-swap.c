#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: pointer to an int
 * @b: pointer to an int
 *
 * Description: This function takes two pointers to ints as parameters
 * and swaps the values of the two integers.
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
