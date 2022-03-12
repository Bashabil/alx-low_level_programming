#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x = 'a';
while (x <= 'z')
{
putchar(x);
}

int y = 'A';
while (y <= 'Z')
{
putchar(y);
}
putchar('\n');
return (0);
}
