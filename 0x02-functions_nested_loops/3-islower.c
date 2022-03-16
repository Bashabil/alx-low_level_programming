#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - entry point
 * Description: it prints alphabets in lowercase
 * followed by a new line and prototype void print_aphabet(void
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
