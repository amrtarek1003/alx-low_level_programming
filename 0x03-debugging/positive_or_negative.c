#include <stdio.h>
#include <stdlib.h>

/**
 * positive_or_negative - print positive or negative or zero based on user input
 * if the number is greater than 0: is positive, if the number is 0: is zero
 * if the number is less than 0: is negative, followed by a new line
 * Return: 0
 */

void positive_or_negative(int i)
{
	/* your code goes there */
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
