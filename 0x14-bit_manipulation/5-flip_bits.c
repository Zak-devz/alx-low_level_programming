/*
 * Auth: Zakaria Rassili
 * File: 5-flip_bits.c
 */
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Description: This function takes two unsigned long int as input and returns
 * the number of bits you would need to flip to get from one number to another.
 * The function does not use the % or / operators.
 *
 * Return: the number of bits you would need to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
		unsigned int nb;

	for (nb = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nb++;
	}

	return (nb);
}
