#include <stdio.h>
/**
 * main - Write a program that prints the numbers from 1 to 100
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 5 == 0)
		{
			if (a % 3 == 0)
			{
				printf("FizzBuzz");
			}
			else
			{
				printf("Buzz");
			}
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", a);
		}
		if (a < 100)
		{
			printf(" ");
		}
	}
}
