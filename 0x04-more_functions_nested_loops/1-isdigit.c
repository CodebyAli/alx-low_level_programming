#include "main.h"
/**
 * _isdigit - if it is digit
 * @c: print int
 * Return: Always 0.
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
