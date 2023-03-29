#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte.
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int len_d = 0, len_s = 0;
	int i, somme = 0;

	while (*(dest + len_d) != '\0')
	{
		len_d++;
	}
	while (*(src + len_s) != '\0')
	{
		len_s++;
	}
	somme = len_d + len_s;

	for (i = 0; i < somme; i++)
	{
		dest[len_d - 1 + i] = src[i];
	}
	dest[somme] = '\0';
	return (dest);
}
