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

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
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
		}
	}
	putchar(10);
	return (0);
}
