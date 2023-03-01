#include <main.h>

/**
 * _strcat - a function that concatenates two strings
 * @src: string
 * @dest: string
 *
 * Return:
 */

char *_strcat(char *dest, char *src)
{
	char *end = dest;

	while (*end != '\0')
	{
		end++;
	}
	while (*src != '\0')
	{
		*end++ = *src++;
	}
	*end = '\0'
		return (dest);
}
