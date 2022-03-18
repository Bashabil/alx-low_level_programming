#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isdigit - Entry Point
 * Description: Check if the number entered is a digit
 * @c: number
 * Return: Always 0 (Success)
 */
int _isdigit(int c) /* This is where the function begins */
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
