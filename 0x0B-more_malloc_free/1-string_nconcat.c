#include "holberton.h"
#include<stdio.h>
#include <stdlib.h>
/**
 *string_nconcat - return 2d array
 *@s1: string to copy.
 *@s2: height.
 *@n: size.
 *Return: int.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int cont, cont2 = 0;
unsigned int i, y = 0;
char *ptr;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (cont = 0 ; *(s1 + cont) != '\0' ; cont++)
{
}
for (cont2 = 0 ; *(s2 + cont2) != '\0' ; cont2++)
{
}
if (n < cont2)
{
cont2 = n;
}
ptr = malloc((cont + cont2) *sizeof(*ptr) + 1);
if (ptr == NULL || ptr == 0)
{
return (NULL);
}
for (i = 0 ; i < (cont + cont2); i++)
{
if (i < cont)
{
ptr[i] = s1[i];
}
else if (y < n)
{
ptr[i] = s2[y];
y++;
}
}
ptr[i] = '\0';
return (ptr);
}
