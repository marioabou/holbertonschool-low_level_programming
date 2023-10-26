#include <stdio.h>

/**
 * main - func print the numbers from 1-100, but for multiples for three
 * fizz is printed insted of the number, for multiples of five
 * Buzz, and fot multiples of both tree an five, FizzBuzz.
 * Return: always 0
 */
int main(void)
{
int num;
for (num = 1; num <= 100; num++)
{
if ((num % 3) == 0 && (num % 5) == 0)
printf("FizzBuzz");
else if ((num % 3) == 0)
printf("Fizz");
else if ((num % 5) == 0)
printf("Buzz");
else
printf("%d", num);
if (num == 100)
continue;
printf(" ");
}
printf("\n");
return (0);
}
