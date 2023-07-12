#include "main.h"

/**
 * is_prime_number - Function that returns 1 if the input integer -
 * - is a prime number other wise the function return 0
 *
 * is_prime_helper - Function used to assist in Return with n is
 * prime number or not
 *
 *   @n: the number to check
 *   @i: Used Variable to Validate for Prime Number or not
 *
 *   Return: int number 0 (Fail) or 1 (Success)
 */

int is_prime_helper(int n, int i);

int is_prime_number(int n)
{
        if (n <= 1)
		return 0; /* Not a prime number */

        /* Start recursion with i = 2 */
	return is_prime_helper(n, 2);
}

int is_prime_helper(int n, int i)
{
	if (i * i > n)
		return 1; /* Is a prime number */

	if (n % i == 0)
		return 0; /* Not a prime number */

        /* Recurse with i + 1 */
	return is_prime_helper(n, i + 1);
}
