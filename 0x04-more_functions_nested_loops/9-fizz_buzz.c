#include <stdio.h>
/**
 * main - entry point
 *
 * Return: void
 */

int main(void)
{

int i = 100;
int j;

j = 1;
while (j <= i)
{
if (j % 3 == 0 && j % 5 == 0)
{
printf("FizzBuzz ");
}

else if (j % 3 == 0)
{
printf("Fizz ");
}

else if (j % 5 == 0)
{
if (j < i)
printf("Buzz ");

else
printf("Buzz");
}

else 
{
printf("%j " j);
}

j++;

}
printf("\n");
return (0);
}
