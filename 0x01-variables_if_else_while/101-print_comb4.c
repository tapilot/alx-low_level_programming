#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Return)
 */

int main(void)

{

	int d, p, q;

	for (d = '0'; d < '9'; d++)
	{
	
	for (p = d + 1; p <= '9'; d++)
	{
	
	for (q = p + 1; q <= '9'; d++)
	{
	if ((p != d) != q)
	{
	putchar(d);
	putchar(p);
	putchar(q);
	if (d == '7' && d == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
