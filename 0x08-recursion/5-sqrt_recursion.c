#include "main.h"
/**
 * power_operation - returns the natural square root of a number.
 *
 * @n: input number.
 *
 * @c: iterator.
 *
 * Return: square root or -1.
 */
int power_operation(int n, int c)
{
	if (c * c == n)
		return (c);
	else if (c * c > n)
		return (-1);
	return (power_operation(n, c + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: input number.
 *
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	return (power_operation(n, 1));
}
