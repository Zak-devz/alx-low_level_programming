#include "main.h"
/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	char sen[8] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(sen[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
