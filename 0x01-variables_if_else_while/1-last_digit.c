#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - use if
 * Description: know the last digit
 * Return: 0
 */
int main(void)
{
int n, ld;
srand(time(0));
n = rand() - RAND_MAX / 2;
ld = n % 10;
printf("Last digit of %i is %i ", n, ld);
if (ld == 0)
printf("and is 0\n");
else if (n > 5)
printf("and is greater than 5\n");
else
printf("and is less than 6 and not 0\n");
return (0);
}
