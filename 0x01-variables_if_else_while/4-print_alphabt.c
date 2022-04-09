#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	char alphabet;

	fro (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && != 'q')
			putchar(alphabet);
	}
	putchar('\n');
	return(0);
}
