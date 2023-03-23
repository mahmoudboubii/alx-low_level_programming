#include "main.h"
#include <stdio.h>

/**
 * main - takes a date and prints how many days are
 *        remaining in the year, taking leap years into account
 *
 * Return: 0 on success, non-zero on failure
 */
int main(void)
{
int month = 2;
int day = 29;
int year = 2000;
int remaining_days;

if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
remaining_days = 366 - convert_day(month, day);
else
remaining_days = 365 - convert_day(month, day);

printf("Remaining days: %d\n", remaining_days);

return (0);
}
