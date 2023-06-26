#include "main.h"

/**
 * swap_int - This function swap the variables that two pointers point to
 *
 * @a: pointer a that point to variable a
 *
 * @b: pointer a that point to variable b
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
