#include <stdio.h>

/**
 * main - print fibonacci
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	unsigned long long int a = 1, b = 2, c;

	printf("%llu, %llu", a, b);
	for (i = 2; i < 50; i++)
	{
		c = a + b;
		printf(", %llu", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
