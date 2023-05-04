/*
 * Auth: Zakaria Rassili
 * File: 4-clear_bit.c
 */
#include "main.h"


/**
 * get_endianness - checks the endianness
 *
 * Description: This function checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x = 1;
	char *endian = (char *)&x;

	if (*endian == 1)
		return (1);

	return (0);
}
