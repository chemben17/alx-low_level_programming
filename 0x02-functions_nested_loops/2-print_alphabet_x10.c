#include "main.h"

/**
 * print_alphabet_x10 - it prints lowecase alphabet ten times.
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int times, alphabet;

	for (times = 1; times <=10; times++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar(10);
	}
}
