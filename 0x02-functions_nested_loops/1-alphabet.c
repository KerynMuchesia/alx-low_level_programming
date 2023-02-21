#include "main.h"

/**
 * main - print alphabet in lower case
 * Retuen: 0 (Success)
 */

void print_alphabet(void);
{
	char x;
	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}

	putchar('\n');
	return 0;
}
