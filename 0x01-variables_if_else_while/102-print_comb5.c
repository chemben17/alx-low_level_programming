#include <stdio.h>
#include <stdlib.h>
/**
 * main - i dont cae
 * description: i domtn
 * Return: 0
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				for (d = 0; d < 10; d++)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar(' ');
					putchar('0' + c);
					putchar('0' + d);
					if (!(a + b == 18 && c + d == 17 && c == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
