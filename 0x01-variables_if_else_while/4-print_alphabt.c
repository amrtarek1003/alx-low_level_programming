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
	for (char chara ='a' ; chara <='z' ;chara++)
	{
		if(chara !='e' && chara !='q')
		{
		putchar(chara);
		putchar('\n');
		}
	}
	

}

