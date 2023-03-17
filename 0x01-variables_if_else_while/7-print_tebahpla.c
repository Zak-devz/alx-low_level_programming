#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	char lower[26] = "zyxwvutsrqponmlkjihgfedcba";

	for (i = 0; i < 26; i++)
	{
		putchar(lower[i]);
	}
	putchar('\n');
	return (0);
}
