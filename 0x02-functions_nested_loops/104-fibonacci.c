#include <stdio.h>
/**
 * main - Write a program that finds and print
 * Return: 0
 */
int main(void)
{
	int i = 0;
	unsigned long int a = 0, b = 1, next;

	for (i = 0; i < 98; i++)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 97)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
