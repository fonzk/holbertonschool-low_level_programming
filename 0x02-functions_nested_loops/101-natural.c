#include <stdio.h>

/**
 * main -  the sum of all the multiples of 3 or 5 below 1024
 *
	* Return: void
 */
int main(void)
{
	int suma = 0;
	int i = 0;

	for (; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			suma += i;
		}
	}
		printf("%d\n", suma);

			return (0);
}
