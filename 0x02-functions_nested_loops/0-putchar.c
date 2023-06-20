#include "main.h"

/**
 * main - Entry Block
 * Description: print "_putchar" using _putchar prototype function
 * Return: Always True (0)
 */
int main(void)
{
	char c[8]="_putchar";
	
	int i =0;
	while(i<8)
	{
		_putchar(c[i]);
		i++;
	}

	_putchar('\n');
	return (0);



}
