#include <stdio.h>
/**
 * main -  even-valued terms, followed by a new line
 * Return: 0
 */
int main(void)
{
	long int a = 0, b = 1, d, sum = 0;
	int c;

	for (c = 0; c <= 35; c++)
	{
		d = a + b;
		a = b;
		b = d;

		if (d < 4000000)
		{
			if (d % 2 == 0)
			{
				sum += d;
			}
		}
	}
	printf("%lu\n", sum);
	return (0);
}
