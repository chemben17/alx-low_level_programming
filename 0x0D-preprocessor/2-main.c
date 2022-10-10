#include <stdio.h>
#ifndef FILE
#define FILE __FILE__
#endif
/**
 * main - program that prints the name
 * Return: no return value
 */
int main(void)
{
	printf("%s\n", FILE);
	return (0);
}
