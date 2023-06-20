#include "main.h"

/*Main - Entry point
 * Description: Print alpha letters
 * Return: Always True(0)
 */

void print_alphabet(void)
{
	char x = 'a';

		while(x <= 'z')
		{
			_putchar(x);
			x++;
		}
	_putchar('\n');
	return(0);
}
