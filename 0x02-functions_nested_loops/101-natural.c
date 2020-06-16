#include <stdio.h>

/**
 * main -  the sum of all the multiples of 3 or 5 below 1024
 *
	* Return: void
 */
int main(void)
{
	int suma = 0;

	for (int i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
		printf("%i\n", i);
			suma += i;
		}
	}
		printf("total%i\n", suma);

			return (0);
}
