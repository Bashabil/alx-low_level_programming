#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x = 0, y = 1;
while (x <= 8)
  {
    for (; y <= 9; y++)
      {
	putchar(x + '0');
	putchar(y + '0');
	if (y < 9)
	  {
	    putchar(',');
	  }
	else
	  {
	    continue;
	  }
	putchar(' ');
      }
    x++;
    y = y + 1;
  }
putchar('\n');
return (0);
}
