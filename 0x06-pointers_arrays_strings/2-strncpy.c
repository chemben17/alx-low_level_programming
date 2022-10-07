#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncpy - Write a function that copies a string
 * @dest: okay
 * @src: okat
 * @n: okay
 * Return: nthing
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;
	int len = 1;

	while (*src != '\0')
		len++;

	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	for (j = len; j < n; j++)
		src[j] = '\0';
	return (dest);
}
