#include "main.h"

/**
 * _strlen - function that return the length of a string
 *
 * @s: the string that the function return the legth of 
 *
 * This function takes a string as a parameter and return its length
 */

int _strlen(char *s)
{
	int tmp = 0;
	char *a = s;
	while(*a != '\0')
	{
		tmp++;
		a++;
	}
	return tmp;
}
