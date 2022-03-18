#include <stdio.h>
#include "main.h"
/**
 * mul - Entry Point
 * Description: Check if the number entered is a digit
 * @a: number
 * @b: number
 * Return: Always 0 (Success)
 */
int mul(int a, int b) /* This is where the function begins */
{
int x;
x = a * b;
if (x < 0)
{
_putchar('-');
_putchar((char)(x / 10 + '0'));
_putchar((char)(x % 10 + '0'));
}
else
{
_putchar(x / 10 + '0');
_putchar(x % 10 + '0');
}
return (0);
}
