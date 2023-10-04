#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point for program execution
 * Description: Print base 16 numbers in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
