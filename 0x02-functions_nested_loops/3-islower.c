#include "holberton.h"
/**
 * _islower - show 1 is lowercase, 0 otherwise
 * @c: return 1 is lowercase, 0 otherwise
 * Return: 1 0
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
