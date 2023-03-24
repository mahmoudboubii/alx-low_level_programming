#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
long int n = 612852475143;
int largest = -1;

while (n % 2 == 0)
{
largest = 2;
n /= 2;
}

for (int i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
largest = i;
n /= i;
}
}

if (n > 2)
largest = n;

printf("%d\n", largest);

return (0);
}
