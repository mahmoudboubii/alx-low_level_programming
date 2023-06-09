#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - prints whether a randomly generated number is
 * positive, negative, or zero.
 * @n: the number to be checked.
 *
 * Return: always void.
 */
void positive_or_negative(int n)
{
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);
}
