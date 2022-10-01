#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 * @argc: the count
 * @argv: te array
 * Return: 1 0r 0
 */
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
