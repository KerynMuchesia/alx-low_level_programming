#include "main.h"

/**
 * main - print alphabet in lower case
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
}
