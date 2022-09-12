#include <stdio.h>
/**
 * main - main function something
 *
 * description: lets it go
 * the program prints all "you think it does"
 * Return: 0
 */
int main(void)
{
	int num;

	num = 0;
	while (num <= 9)
	{
		putchar(num);
		num++;
	}
	putchar(10);
	return (0);
}
