#include "main.h"
/**
 * _strcat - Write a function that concatenates two string
 * @dest: okay
 * @src: okay
 * Return: a character
 */
char *_strcat(char *dest, char *src)
{
	int d, c;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	d = 0;
	while (src[d] != '\0')
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	_putchar(10);
	return (dest);
}
