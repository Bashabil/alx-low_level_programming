#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char y = 'A';
char x = 'a';
while (x <= 'z')
{
putchar(x);
}
while (y <= 'Z')
{
putchar(y);
}
putchar('\n');
return (0);
}
