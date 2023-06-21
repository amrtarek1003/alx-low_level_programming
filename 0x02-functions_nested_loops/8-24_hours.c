#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Description: Prints the time in the format "HH:MM" for every minute of the
 * day, starting from 00:00 and ending at 23:59.
 */
void jack_bauer(void)
{
	int hour2 = 0;
	int hour1 = 0;
	int min2 = 0;
	int min1 = 0;

	while (hour2 <= 2)
	{
		while (hour1 <= 9)
		{
			while (min2 <= 5)
			{
				while (min1 <= 9)
				{
					printf("%i%i:%i%i\n", hour2, hour1, min2, min1);
					min1++;
				}
				min2++;
				min1 = 0;
			}
			hour1++;
			min2 = 0;
			if (hour2 == 2 && hour1 == 4)
				break;
		}
		hour2++;
		hour1 = 0;
	}
}
