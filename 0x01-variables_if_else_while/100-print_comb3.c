#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x, y = 1;
for (x = 0; x < 9; x++)
{
while (y <= 9)
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
y = y + 1;
}
putchar('\n');
return (0);
}
