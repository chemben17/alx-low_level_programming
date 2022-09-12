#include <stdio.h>
/**
 * main - main function does all
 *
 * description: i really don't know
 * the program prints "alphabets in capital and small"
 * Return: 0
 */
int main(void)
{
	int num;

	num = 97;
	while (num >= 97 && num <= 122)
	{
		putchar(num);
		num++;
	}

	num = 65;
	while (num >= 65 && num <= 90)
	{
		putchar(num);
		num++;
	}
	putchar(10);
	return (0);
}
