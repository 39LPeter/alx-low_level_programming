#include <stdio.h>
#include <unistd.h>
/**
 * main -Entry point for program execution
 * Description: Prints all single digit numbers of base10
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	putchar('\n');
	return (0);
}
