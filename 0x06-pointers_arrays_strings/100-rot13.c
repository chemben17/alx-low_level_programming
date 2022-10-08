#include "main.h"
/**
 * rot13 - encoding
 * @str: the stringg passed into the function
 * Return: it returns the codefied word.
 */
char *rot13(char *str)
{
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i = 0, k;

	while (str[i] != '\0')
	{
		for (k = 0; c[k]; k++)
		{
			if (str[i] == c[k])
			{
				str[i] = b[k];
				break;
			}
		}
		i++;
	}
	return (str);
}
