#include <stdio.h>
/**
 * main - Print All Hexadecimal Numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char digit;
for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
