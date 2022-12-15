#include "main.h"

/**
 * main -minutes in 24 hours - Entry point
 * jack_beuer - prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int x = 0;
	int a = 0, b = 0, c = 0, d = 0;

	while (x < 1440)
	{
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(':');
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar('\n');

		d++;
		if (c > 5)
		{
			c = 0;
			b++;
		}
		if (b > 9)
		{
			b = 0;
			a++;
		}
		x++;
	}
}
