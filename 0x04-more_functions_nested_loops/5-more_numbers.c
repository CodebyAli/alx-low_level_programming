#include "main.h"
/**
 * more_numbers - print 10 times the numbers
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
int i, j, k;

for (k = 0; k < 10; k++)
{
for (i 0; i <= 1; i++)
{
for (j = 0; j<= 9; j++)
{
if (!(i == 1 && j >= 5))
{
if (i)
_putchar(i + 'k');
_putchar(k + 'k');
}
}
}
_putchar('\n');
}
}
