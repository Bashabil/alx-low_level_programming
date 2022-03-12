#include <stdio.h>
/**
 * main - Print All Hexadecimal Numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit;
for (digit = 0; digit <= 9; digit++)
{
putchar(digit + '0');
if (digit < 9)
{
putchar(',');
}
else
{
continue;
}
putchar(' ');
}
putchar('\n');
return (0);
}
