#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/*
 * main - Entry point
 *
 * Description: Generate a random positive or
 * negative number each time its executed
 *
 * Return: Always Succeed (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%i\n",n);
	return (0);
}
