/*
 * Auth: Zakaria Rassili
 * File: 0-binary_to_uint.c
 */

#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 * Return: The converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1 or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len = 0;
	unsigned int x = 0, mult = 1;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
		len++;
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		x += (b[i] - '0') * mult;
		mult *= 2;
	}
	return (x);
}
