#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_endianness - Checks the endianness
 * Return: if big_endian - 0
 *         if little-endian - 1
 *
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);

}
