#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Desription: Print the sum of all multiples of 3 0r 5 below 1021
 * Return: 0
 */

int main(void)
{
	int i = 1;
	int total = 0;

	while (i < 1024)
	{
		if (i % 3 == 0)
			total += 1;
		else if (i % 5 == 0)
			total += i;

		i++
	}
	printf("%d\", total);

	return (0);
}
