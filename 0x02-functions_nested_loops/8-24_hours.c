#include "main.h"

/* main - Entry point
 * Description: print each minute incrimited by adding one more minute
 * int the clock starting from 00:00 to 23:59
 * Return: Always True(0)
 */

void jack_bauer(void)
{
	int hour2 = 0;
	int hour1 = 0;
	int min2  = 0;
	int min1  = 0;

	while (hour2 <= 2)
	{
		while (hour1 <= 9)
		{
			while (min2 <= 5 )
			{
				while(min1 < 10)
				{
					printf("%i%i:%i%i\n",hour2,hour1,min2,min1);
					min1++;
				}
				min2++;
				min1 = 0;
			}
			hour1++;
			min2 = 0;
				 if(hour2==2 && hour1==4)
                		{
                       			 break;
        	        }	
		}
	
		hour2++;
		hour1 = 0;
	}
}
