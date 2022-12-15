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
	int i, res;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			res += i;
	printf("%d\n", res);
	return (0);
}
