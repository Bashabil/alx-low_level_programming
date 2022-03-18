#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isalpha - entry point
 * Description: it checks if the parameter entered
 * @c: number
 * is in lower case using prototype int _isalpha(int c
 * Return: Always 0 (Success)
 */
int _isalpha(int c) /* This is the function used */
{
int x;
x = isalpha(c);
if (x > 0)
{
return (1);
}
else
{
return (0);
}
}
