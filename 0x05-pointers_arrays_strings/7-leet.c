#include<stdio.h>
#include "holberton.h"
/**
 *leet - encode.
 *@c: value to be evaluate.
 *Return: not.
 */
char *leet(char *c)
{
int l = 0;
char char1[5] = {'4', '3', '0', '7', '1'};
char char2[5] = {'a', 'e', 'o', 't', 'l'};
char char3[5] = {'A', 'E', 'O', 'T', 'L'};
int x;
while (*(c + l) != '\0')
{
for (x = 0 ; x < 5 ; x++)
{
if (c[l] == char2[x] || c[l] == char3[x])
{
c[l] = char1[x];
}
}
l++;
}
return (c);
}
