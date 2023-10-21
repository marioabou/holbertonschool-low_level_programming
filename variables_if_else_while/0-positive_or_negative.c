#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n; // Cambié ":" a ";"

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n > 0)
        printf("%d is positive\n", n); // Cambié "m" a "n"
    else if (n == 0)
        printf("%d is zero\n", n);
    else
        printf("%d is negative\n", n); // Agregué punto y coma al final

    return (0);
}
