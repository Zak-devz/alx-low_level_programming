#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings, makes new string
 *
 * @s1: string 1 to concatenate with string 2
 * @s2: string 2 to concatenate with string 1
 *
 * Return: pointer to new string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int Size1 = 0, Size2 = 0;
	char *conc, *concStart;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*(s1 + Size1))
	{
		Size1++;
	}
	while (*(s2 + Size2))
	{
		Size2++;
	}
	conc = malloc(sizeof(char) * (Size1 + Size2 + 1));
	if (conc == NULL)
		return (NULL);
	concStart = conc;
	while (*s1)
		*conc++ = *s1++;
	while (*s2)
		*conc++ = *s2++;
	*conc = '\0';
	return (concStart);
}
