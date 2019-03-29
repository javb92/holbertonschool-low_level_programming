#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stddef.h>
unsigned int binary_to_uint(const char *b);
long int x_to_the_n(int x, int n);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
#endif
