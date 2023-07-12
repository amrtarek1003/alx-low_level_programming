#include "main.h"

/**
 * is_prime_number - Function that returns 1 if the input integer is a prime number -
 * - other wise the function return 0
 *
 *   Return : int number 0 (Fail) or 1 (Success)
 */


int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return 0;
	}

	if (i * i > n)
	{
		return 1;
	}

	if (n % i == 0)
	{
		return 1;
	}

	i++;
	return (is_prime_number(int n);
}
