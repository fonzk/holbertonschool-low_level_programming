#include <stdio.h>

/**
 * main - use for
 * Description: use putchar to numbers
 * Return: 0
 */
int main(void)
{
int a;
for (a = '0'; a <= '8' ; a++)
{
putchar(a);
putchar(',');
putchar(' ');
}
putchar('9');
return (0);
}
