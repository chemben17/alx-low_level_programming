#include <stdio.h>
#include "main.h"
/**
 * _strcpy -  copies the string pointed
 * @dest: the argument to be copied to
 * @src: the string that wants to be copied
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
