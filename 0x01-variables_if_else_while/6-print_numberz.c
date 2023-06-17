#include <stdio.h>

/*
 * main - Entry point
 *
 * Description: print all the alphabit characters from a to z
 *
 * Return: Always True (0)
 */
int main(void)
{
	char a =0;
	while(a<10)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');

}

