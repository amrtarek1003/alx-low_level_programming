#include "main.h"

/*
 * main - Entry point
 * Description: print alpha letters 10 time
 * line between each line
 * Return: Always True (0)
 */

void print_alphabet_x10(void)
{


	for(int i =0; i < 10; i++)
	{
		char x ='a';
		while(x <= 'z')
		{
			_putchar(x);
			x++;
		}
	_putchar('\n');
	}
	return(0);
}
