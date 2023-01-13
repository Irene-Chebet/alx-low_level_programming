#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _isNum - check if is a number
*@num: string to check
*Return: 1 is numm, 0 not num
*/
int _isNum(char *num)
{
	int i;

	for (i = 0; num[i] != '\0'; i++)
	{
		if (num[i] < '0' || num[i] > '9')
			return (0);
	}
	return (1);
}

/**
* *_memset - copies a character to the firstn characters of the string pointed
*@s: original string
*@b: value to remplace
*@n: number of bytes
*Return: s (string modify)
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
* _strlen - returns the lenght of a string
*@s: poiter of character
*Return: the length of a string
*/
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	return (len);
}
