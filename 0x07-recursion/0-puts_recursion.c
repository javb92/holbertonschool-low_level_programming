#include "holberton.h"
/**
 *_puts_recursion - print with recurssion.
 *@s: value to be evaluate.
 *Return: not.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
s++;
_puts_recursion(s);
}
}
