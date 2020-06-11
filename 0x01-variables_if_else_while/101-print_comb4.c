#include <stdio.h>

/**
 * main - use for
 * Description: use putchar to numbers
 * Return: 0
 */
int main(void)
{
int a, b, c;
a = '0';
b = 1 + a;
c = 1 + b;
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != '7' || b != '8' || c != '9')
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
	putchar('\n');
	return (0);
}
