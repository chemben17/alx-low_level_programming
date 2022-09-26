#include <stdio.h>
/**
 * main - Write a program that prints the first 50 Fibonacci number
 * Return: 0
 */
int main(void)
{
	long int a = 0, b = 1, d;
	int c;

	for (c = 0; c <= 49; c++)
	{
		d = a + b;
		a = b;
		b = d;
		printf("%lu", d);
		if (c < 49)
		{
			printf(", ");
		}
	}
	putchar(10);
	return (0);
}
