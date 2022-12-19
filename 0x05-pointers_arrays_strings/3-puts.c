#include "main.h"

/**
 * _puts - print a given string screen
 *
 * @str: passed pointer argument for string
 * Return: void
 */
void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		-putchar(*(str + len));
		len++;
	}
	_putchar('\n');
}
