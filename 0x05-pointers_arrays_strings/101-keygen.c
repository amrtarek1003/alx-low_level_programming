#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random valid password for 101-crackme program
 *
 * Return: 0
 */
int main(void)
{
  int i, sum, diff, n;
  char password[100];

  srand(time(NULL));

  sum = 0;
  for (i = 0; sum < 2772 - 122; i++)
    {
      n = rand() % 62;
      if (n < 10)
        password[i] = '0' + n;
      else if (n < 36)
        password[i] = 'a' + n - 10;
      else
        password[i] = 'A' + n - 36;
      sum += password[i];
    }
  diff = sum - 2772 + 122;
  password[i++] = diff;
  password[i] = '\0';

  printf("%s", password);

  return (0);
}
