#include "holberton.h"

/**
 * times_table - prints times table up to 9
 *
 * Return: Always 0.
 */
void times_table(void)
{
int r, d;
for (int m = 0 ; m < 10; m++)
{
for (int n = 0; n < 10; n++)
{
r = m * n;
d = m * (n + 1);
if (r >= 10)
{
_putchar(r / 10 + '0');
_putchar(r % 10 + '0');
}
else
{
_putchar(r + '0');
}
if (n != 9)
{
if (d >= 10)
{
_putchar(',');
_putchar(' ');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
}
_putchar('\n');
}
}
