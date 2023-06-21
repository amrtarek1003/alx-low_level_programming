#include "main.h"
#include <stdio.h>

/**
 * print_time_table - print times table for enterend number from user
 * number shouldn't be less than 0 or greater than 15
 *
 * Return: (1) if entered wrong input or (0) if success)
 */

void print_times_table(int n)
{
	int x =0;
	int y =0;

	if(n>15 || n<0)
	{
		return;
	}
	while(x <= n)
	{
		while(y <=n)
		{
				if(x*y<10)
				{
					_putchar(x*y + '0');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					if(y != n)
					{
						_putchar(',');
					}
				}
				if(x*y >= 10 && x*y<100)
				{
					_putchar(x*y/10 + '0');
					_putchar((x*y)%10 + '0');
					_putchar(' ');
					_putchar(' ');
					if(y != n)
					{
						_putchar(',');
					}
				}
				if(x*y >= 100)
				{
					_putchar(x*y/100 + '0');
					_putchar(((x*y)%100)/10	+'0');
					_putchar((x*y)%10 + '0');
					_putchar(' ');
					if(y != n)
					{
						_putchar(',');
					}
				}
				y++;
		}
		x++;
		y = 0;
		_putchar('\n');
	}
}
