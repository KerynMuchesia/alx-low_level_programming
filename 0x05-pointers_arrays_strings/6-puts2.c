#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int a = 0;
	char *y = str;
	int b;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	a = longi - 1;
	for (b = 0 ; b <= a ; b++)
	{
		if (b % 2 == 0)
	{
		_putchar(str[b]);
	}
	}
	_putchar('\n');
}
