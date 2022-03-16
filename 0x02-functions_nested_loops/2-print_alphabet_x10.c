#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Description: it prints alphabets in lowercase
 * followed by a new line and prototype void print_aphabet(void
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void) /* This is the function used */
{
char x, y;
y = 1;
while (y <= 10)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
y++
_putchar('\n');
}
return;
}
