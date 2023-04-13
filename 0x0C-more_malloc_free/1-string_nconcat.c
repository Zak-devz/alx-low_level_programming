#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings, up to n bytes of s2
 *
 * @s1: string 1 to concatenate with string 2
 * @s2: string 2 to concatenate with string 1
 * @n: number of bytes to concatenate of s2
 *
 * Return: pointer to new string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0, size2 = 0, i = 0;
	char *result, *concS;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*(s1 + size1))
	{
		size1++;
	}
	while (*(s2 + size2))
	{
		size2++;
	}
	result = malloc((size1 + size2 + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	concS = result;
	while (*s1)
	{
		*result++ = *s1++;
	}
	while (i < n)
	{
		*result++ = *s2++;
		i++;
	}
	*result = '\0';
	return (concS);
}
