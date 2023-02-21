#include "main.h"

/**
 *  a: function that checks for lowercase character
 *  Return: 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
