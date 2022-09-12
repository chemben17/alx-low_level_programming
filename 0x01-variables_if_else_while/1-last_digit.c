#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - the main function is known
 *
 * description: to determine the value of last digit
 * the result prints "last digit of "
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	n = n % 10;

	if( n > 5) 
	{
		printf("Last digit of %d and it is greater than 5\n", n);
	}
	else if( n == 0)
	{
		printf("Last digit of %d and is 0\n", n);
	}
	else if( n < 6 && n != 0)
	{
		printf("Last digit of %d and is less than 6 and not 0\n", n);
	}
	return 0;
}
