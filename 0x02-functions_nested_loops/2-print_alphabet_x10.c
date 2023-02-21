#include "main.h"

/**
 * a function that prints 10 times the alphabet, in lowercase, followed by a new line
 * Return: 0 (Success)
 */

void print_alphabet_x10(void)
{
	int x;
	int times;

	for (times = '0'; times < '10'; times++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			putchar(x);
		}
		putchar('\n');
	}
}
