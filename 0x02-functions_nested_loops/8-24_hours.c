#include "main.h"

/**
 * jack_bauer - prints every min of jack's day
 * 
 * Return: 0
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;
	int h_r, m_r;

	while (h <= 23)
	{
		while (m <= 59)
		{
			h_r = h % 10;
			m_r = m % 10;
			_putchar(h / 10 + '0');
			_putchar(h_r + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m_r + '0');
			m++;
			_putchar(10);
		}
		h++;
		m = 0;
	}
}


