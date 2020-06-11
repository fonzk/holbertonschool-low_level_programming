#include <stdio.h>

/**
 * main - use for
 * Description: use putchar to print the alphabet except q and e
 * Return: 0
 */
int main(void)
{
int a;
for (a = 'a'; a <= 'z' ; a++)
{
if ((a != 'q') && (a != 'e'))
{
putchar(a);
}
}
putchar('\n');
return (0);
}
