#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100, followed by a new line
 *
 * For multiples of three, the program prints 'Fizz' instead of the number.
 * For multiples of five, the program prints 'Buzz' instead of the number.
 * For numbers which are multiples of both, the program prints 'FizzBuzz'.
 * Each number or word is separated by a space.
 * The program is allowed to use the standard library.
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
			i++;
		}
		if (i % 3 == 0)
		{
			printf("Fizz ");
			i++;
		}
		if (i % 5 == 0)
		{
			printf("Buzz ");
			i++;
		}
		if (i > 100)
		{
			break;
		}
		printf("%d ", i);
	}
	printf("\n");
	return (0);
}
