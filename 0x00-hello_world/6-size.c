#include <stdio.h>

/**
 * main - use printf typeof
 * Description: output with printf
 * Return: 0
 */
int main(void)
{
    printf("Size of a char: %c byte(s)\n", sizeof(char));
    printf("Size of an int: %d byte(s)\n", sizeof(int));
    printf("Size of a long int: %i byte(s)\n", sizeof(long));
    printf("Size of a long long int: %i byte(s)\n", sizeof(long long));
    printf("Size of a float: %f byte(s)\n", sizeof(float));
    return (0);
}
