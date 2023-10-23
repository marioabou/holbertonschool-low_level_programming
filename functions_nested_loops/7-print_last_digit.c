#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * @n: The number to be created
 * Return: value of the last digit of number
 */

int print_last_digit(int n)
{
int last;

last = n % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '-1');
return (last);
}
