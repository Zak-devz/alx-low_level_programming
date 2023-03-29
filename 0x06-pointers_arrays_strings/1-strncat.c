#include "main.h"
/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to use from src
 *
 * Description: This function is similar to the _strcat function, except that
 * it will use at most n bytes from src; and src does not need to be
 * null-terminated if it contains n or more bytes.
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_d = 0, len_s = 0;
	int i = 0, s = 0;

	while (*(dest + len_d) != '\0')
	{
		len_d++;
	}
	while (*(src + len_s) != '\0')
	{
		len_s++;
	}
	s = len_s + len_d;
	if (n < len_s)
	{
		while (i < n)
		{
		dest[len_d + i] = src[i];
		i++;
		}
	}
	else
	{
		while (i < len_s)
		{
			dest[len_d + i] = src[i];
			i++;
		}
	}
	dest[s] = '\0';
	return (dest);
}
