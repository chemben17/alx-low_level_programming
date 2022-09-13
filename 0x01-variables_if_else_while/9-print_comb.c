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
	char num;

	num = '0';
	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
