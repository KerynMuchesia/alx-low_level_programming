#include "main.h"
/**
 * clear_bit - sets value of a bit to 0 at given index
 * @n: points to number to modify
 * @index: starting from 0 of the bit to set
 * Return: 1 if success or -1 if error occurrs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
