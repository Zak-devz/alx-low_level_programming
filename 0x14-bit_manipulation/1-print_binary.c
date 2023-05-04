/*
 * Auth: Zakaria Rassili
 * File: 1-print_binary.c
 */
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed in binary
 *
 * Description: This function takes an unsigned long int as input and prints
 * its binary representation. The function does not use arrays, malloc, or
 * the % or / operators.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
