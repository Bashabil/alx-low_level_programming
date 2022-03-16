#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - entry point
 * Description: it prints alphabets in lowercase
 * followed by a new line and prototype void print_aphabet(void
 * Return: Always 0 (Success)
 */
void print_alphabet(void) /* This is the function used */
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
return;
}
