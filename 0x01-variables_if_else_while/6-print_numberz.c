#include <stdio.h>
/**
 * main - main function level
 *
 * description: like i care
 * the program prints "why do you cre"
 * Return: 0
 */
int main(void)
{
	char num;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar(10);
	return (0);
}
