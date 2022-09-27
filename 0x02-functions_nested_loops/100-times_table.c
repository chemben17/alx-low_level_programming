#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Write a function that prints the n times table
 * @n: an argument passsed into
 * Return: nothing
 */
void print_times_table(int n)
{
	int b, c;

	if (n > 0 && n < 15)
	{
		for (b = 0; b <= n; b++)
		{
			for (c = 0; c <= n; c++)
			{
				int p = b * c;

				if (b == 0)
				{
					putchar('0');
				}
				if (b == 0 && c != n)
				{
					putchar(',');
					putchar(' ');
					putchar(' ');
					putchar(' ');
				}
				if (c == 0 && b > 0)
				{
					if (p <= 9)
					{
						putchar(',');
						putchar(' ');
						putchar(' ');
						putchar(' ');
						putchar(p + '0');
					}
					else if (p < 100 && p > 9)
					{
						putchar(',');
						putchar(' ');
						putchar(' ');
						putchar(p / 10 + '0');
						putchar(p % 10 + '0');
					}
					else
					{
						int a, b, c, d;

						a = p / 10;
						b = a / 10;
						c = a % 10;
						d = p % 10;

						putchar(',');
						putchar(' ');
						putchar(b + '0');
						putchar(c + '0');
						putchar(d + '0');
					}
				}
			}
			putchar(10);
		}
	}
}
