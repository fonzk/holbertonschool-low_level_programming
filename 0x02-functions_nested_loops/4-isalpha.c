#include "holberton.h"
/**
 * _isalpha - show 1 is lowercase, 0 otherwise
 * @c: 1 if c is a letter, lowercase or uppercase
 * Return: 1 0
 */
int  _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}
