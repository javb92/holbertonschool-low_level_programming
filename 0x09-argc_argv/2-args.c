#include<stdio.h>
/**
 *main - main.
 *@argc: value to be evaluate.
 *@argv: value to be evaluate.
 *Return: 0.
 */
int main(int argc, char **argv)
{
int t;
for (t = 0 ; t < (argc) ; t++)
{
printf("%s\n", argv[t]);
}
return (0);
}
