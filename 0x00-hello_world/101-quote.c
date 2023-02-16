#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error code)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = sizeof(str) - 1;

	if (write(STDERR_FILENO, str, len) != len)
		return (1);

	return (1);
}
