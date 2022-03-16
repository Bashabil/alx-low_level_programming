#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_sign - entry point
 * Description: it checks if the parameter int n entered
 * is in lower case using prototype int print_sign(int n
 * Return: Always 0 (Success)
 */
int print_sign(int n) /* This is the function used */
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
else
{
_putchar('-');
return (-1);
}
}
