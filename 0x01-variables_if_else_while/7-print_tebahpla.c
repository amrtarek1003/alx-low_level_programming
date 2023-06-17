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
	for (char chara ='z' ; chara >='a' ;chara--)
	{
		putchar(chara);
	}
	putchar('\n');	

}

