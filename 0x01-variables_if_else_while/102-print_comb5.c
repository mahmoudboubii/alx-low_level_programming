#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers
 * ranging from 0 to 99, in ascending order, with each combination separated by a comma
 * followed by a space, and each number separated by a space. All numbers are printed with two digits.
 * Returns: Always 0 (Success)
 */

int main(void)
{
int i, j, k, l;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
for (k = i; k <= 9; k++)
{
l = (k == i) ? j + 1 : 0;
for (; l <= 9; l++)
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(k + '0');
putchar(l + '0');
if (!(i == 9 && j == 8 && k == 9 && l == 9))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return 0;
}
