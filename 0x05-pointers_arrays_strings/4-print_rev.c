#include "main.h"
/**
 * print_rev -  a function that prints a string, in reverse, then a new line
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int rvs = 0;
	int o;

	while (*s != '\0')
	{
		rvs++;
		s++;
	}
	s--;
	for (o = rvs; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
