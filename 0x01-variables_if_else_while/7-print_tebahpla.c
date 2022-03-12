#include <stdio.h>
/**
 * main - Print Alphabets in the reverse order
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int x;
for (x = 'z'; x >= 'a'; x--)
{
putchar(x);
}
putchar('\n');
return (0);
}
