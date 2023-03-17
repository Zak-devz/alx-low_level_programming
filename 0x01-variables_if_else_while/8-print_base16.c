#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	char alph[] = "abcdef";

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (i = 0; i < 6; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
