#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * set_bit - prog sets the value of a bit to 1 at a given index.
 * @n: number to set
 * @index: index at whict set bit
 *
 * Return: 1 if Success, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}
