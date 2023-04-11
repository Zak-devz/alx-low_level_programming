#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes it.
 * @size: the size of the array to be created
 * @c: the char to initialize the array with
 *
 * Return: a pointer to the array, or NULL if size = 0 or if the function fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size <= 0)
	{
		return (NULL);
	}
	arr  =  malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		*(arr + i) = c;
		i++;
	}
	return (arr);
}
