#include "main.h"
#include <stdio.h>
/**
 * main - Write a program that prints all arguments it receives
 * @argc: the number of input arg
 * @argv: the array of the input into CLI
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc < 1)
		return (0);
	printf("%s\n", *argv);
	main(argc - 1, (argv + 1));
	return (0);
}
