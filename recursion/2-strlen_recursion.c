#include "main.h"
/**
* _strlen_recursion - Returns the length of a string
*@s: The string to be measured
*Return: The length of the strings
*/
int _strlen_recursion(char *s)
{
int logit = 0;

if (*s)
{
longit++;
logit += _strlen_recursion(s + 1);
}
return (logit);
}

