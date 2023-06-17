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
		putchar(chara);
	}
	
	for (char chara ='A' ; chara <='Z' ;chara++)
        {
                putchar(chara);
        }	

	putchar('\n');
}

