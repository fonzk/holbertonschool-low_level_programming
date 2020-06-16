#include <stdio.h>

/**
 * main -  the first 50 fibonnaci numbers
 *
	* Return: void
 */
int main(void)
{
	long u1 = 2;
	int c = 3;
	long u2 = 3;
	long s = 3;

printf("1, 2, ");
	for (; c < 50; c++)
	{
		printf("%ld, ", s);
		s = u1 + u2;
		u1 = u2;
		u2 = s;
	}
		printf("%ld\n", s);
	return (0);
}

