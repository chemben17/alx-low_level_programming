#include <stdio.h>
#include <stdlib.h>
/**
 * main - main is a good function
 *
 * description: i dokidhgbkjs;
 * the function prints "okat i we f"
 * Return: 0
 */
int main(void)
{
	int i, j;

	i = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (i != j && i < j)
			{
				putchar(i + '0');
				putchar(i + '0');
				if ((i + j) != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar(10);
	return (0);
}
