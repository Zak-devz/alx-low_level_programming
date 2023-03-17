#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 26; i++)
	{
		putchar(lower[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(upper[i]);
	}
	putchar('\n');
	return (0);
}
