#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: the number of arg passed by CLI
 * @argv: the name passed into it CLI
 * Return: 0
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
