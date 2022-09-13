#include <stdio.h>
/**
 * main - main function thing
 *
 * decription: i dont care
 * what the program prints "keep quiet"
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
