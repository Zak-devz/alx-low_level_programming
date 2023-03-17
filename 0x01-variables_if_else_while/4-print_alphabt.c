#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	char str[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		if (i == 4 || i == 16)
		{
			i++;
		}
		putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
