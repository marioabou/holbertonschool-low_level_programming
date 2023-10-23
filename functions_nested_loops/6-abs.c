#include "main.h"

/**
 * _abc - Computes de absolute value of an integer
 * @c: The character to be computed
 * Return: An absolute value of number or zero
 */

int _abs(int c)
{
if (c < 0)
{
int abs_val;

abs_val = c * -1;
return (abs_val);
}
return (c);
}
