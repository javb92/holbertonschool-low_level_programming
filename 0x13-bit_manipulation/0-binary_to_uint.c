#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "holberton.h"
/**
 *x_to_the_n - pot
 *@x: char
 *@n: number.
 *Return: number.
 */
long int x_to_the_n(int x, int n)
{
	int i;
	int number = 1;

	for (i = 0 ; i < n ; ++i)
	{
		number *= x;
	}
	return (number);
}
/**
 *binary_to_uint - cast
 *@b: char.
 *Return: number.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int y = 0;
	int z = 0;
	int bin = 0;
	unsigned int res = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0 ; *(b + i) != '\0' ; i++)
	{
	}
	if (bin == 0 || bin == 1)
	{
		for (y = (i - 1) ; y >= 0 && (bin == 0 || bin == 1); y--)
		{
			if ((b[y] - '0') == 0 || (b[y] - '0') == 1)
			{
				bin = (b[y] - '0');
				res = res + (bin * x_to_the_n(2, z));
				z++;
			}
			else
			{
				res = 0;
				break;
			}
		}
	}
	return (res);
}
