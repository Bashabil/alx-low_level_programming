#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isupper - Entry Point
 * Description: Check if the alphabet entered is an uppercase alphabets
 * using the function _isupper(int c)
 * Return: Always 0 (Success)
 */
int _isupper(int c) /* This is where the function _isupper(int c) begins */
{
  int x;
  x = isupper(c);
  if (x == 1)
    {
      return (1);
    }
  else
    {
      return (0);
    }
}
