#include "holberton.h"
#include<stdio.h>
#include <stdlib.h>
/**
 *_calloc - allocated men for array.
 *@nmemb: string to copy.
 *@size: dest.
 *Return: not.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i = 0;
unsigned char *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL || ptr == 0)
{
return (NULL);
}
for (i = 0 ; i < nmemb * size; i++)
{
ptr[i] = 0;
}
return (ptr);
}
