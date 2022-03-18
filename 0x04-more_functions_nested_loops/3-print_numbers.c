#include "main.h"
/**
 * print_numbers - Print numbers 0-9 
 * 
 * Return: void
 */
void print_numbers(void) /* This is where the function begins */
{
int x;
for(x = '0'; x <= '9'; x++)
{
_putchar(x);
}
_putchar('\n');
}
