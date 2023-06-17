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
	printf("Last digit of %i is %i and ",n,n%10);
	if(n%10>5)
	{
		printf("is greater than 5\n");
	}
	if(n%10<6 && n != 0)
	{
		printf("is less than 6 and not 0\n");
	}
	if(n%10<6 && n == 0)
	{
		printf("is less than 6 and equal 0\n");
	}

	return (0);
}
