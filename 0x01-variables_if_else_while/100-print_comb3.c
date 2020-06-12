#include <stdio.h>

/**
 * main - prints 00-99, but prints only smallest combination of two digits
 *
 * Description: Uses multiple loops to print all numbers, while ensuring
 * the first number is never larger than the second number
 * Return: returns 0
 */
int main(void)
{
	int a, b;

	for (a = 48, b = 49; a < 58; a++)
	{
		while (b < 58)
		{
			if (a != b)
			{
				if (b > a)
				{
					putchar(a);
					putchar(b);
					if (a < 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
			b++;
		}
		b = 49;
	}
	putchar('\n');
	return (0);
}
