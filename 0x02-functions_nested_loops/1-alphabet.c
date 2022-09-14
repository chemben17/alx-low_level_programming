#include "main.h"
/**
 * main - prints alphabet in lower case
 *
 * description: a functionthat prints alphabet on lowercase.
 * Return: 0
 */
void print_alphabet(void)
{
	int letter;

	for (letter = 97; letter <= 122; letter++)
	{
		_putchar(letter);
	}
}
