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
if (digit == 9)
{
putchar(digit + '0');
}
else
{
putchar(digit + '0');
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
