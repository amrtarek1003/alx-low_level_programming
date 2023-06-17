#include <stdio.h>

/*
 * main - Entry point
 *
 * Description: print all the numbers of base 16 in lowercase
 *
 * Return: Always True (0)
 */
int main(void)
{
    int i;

    for (i = 0; i < 16; i++)
    {
        if (i < 10)
        {
            putchar(i + '0');  // print digits 0 to 9
        }
        else
        {
            putchar(i - 10 + 'a');  // print letters a to f
        }
    }

    putchar('\n');  // print a newline character

    return 0;
}
