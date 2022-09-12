#include <stdio.h>
/** main - min function thingy
 *
 * description: i don tire oo
 * the program prints "e fimi le joor"
 * Return: 0
 */
int main(void)
{
	int num;

	num = 97;
	while (num >= 97 && num <= 122)
	{
		if (!(num == 101 || num == 113))
		{
			putchar(num);
		}
		num++;
	}
	putchar(10);
	return (0);
}

