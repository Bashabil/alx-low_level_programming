#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - entry point
 * Description: it checks if the parameter entered
 * is in lower case using prototype int _islower(int c
 * @c: number
 * Return: Always 0 (Success)
 */
int _islower(int c) /* This is the function used */
{
int x;
x = islower(c);
if (x > 0)
{
return (1);
}
else
{
return (0);
}
}
