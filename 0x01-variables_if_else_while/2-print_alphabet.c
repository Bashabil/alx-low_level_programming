#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
int x = 'A';
while (x <= 'Z')
{
x = tolower(x);
putchar(x);
}
return (0);
}
