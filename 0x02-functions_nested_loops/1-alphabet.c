#include "main.h"
/**
 * main - prints alphabet in lower case
 *
 * description: a function that prints alphabet on lowercase.
 * the function prints "alphabet on lower case"
 * Return: 0
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 97; letter <= 122; letter++)
	{
		_putchar(letter);
	}
	_putchar(10);
}
