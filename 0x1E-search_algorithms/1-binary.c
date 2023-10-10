#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using binary search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, return -1.
 *         Otherwise, return the index where the value is located.
 *
 * Description: Prints the subarray being searched after each change.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid, i;

	/* Check for a NULL array */
	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		/* Calculate the midpoint of the current search range */
		mid = left + (right - left) / 2;

		/* Print the subarray being searched */
		printf("Searching in array: %d", array[left]);
		for (i = left + 1; i <= right; i++)
			printf(", %d", array[i]);
		printf("\n");

		/* Check if the value is found at the midpoint */
		if (array[mid] == value)
			return (mid);

		/* If the value is in the left half, update the right index */
		if (array[mid] > value)
			right = mid - 1;
		/* If the value is in the right half, update the left index */
		else
			left = mid + 1;
	}

	/* Value not found in the array */
	return (-1);
}
