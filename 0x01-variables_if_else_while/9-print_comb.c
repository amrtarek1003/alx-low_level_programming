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
	for (int chara =0 ; chara <10 ;chara++)
	{
		putchar(chara + '0');
		if(chara <9)
		{
		putchar(' ');
		putchar(',');
		}
	}
	putchar('\n');
	  
	
	

}

