#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point for program execution
 * Description: Prints all single digit numbers of base10 using putchar
 * The putchar function converts the integer to a character 
 * by adding the ASCII value of '0'
 * which is 48 
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
    	{
        	putchar(i + '0');
        	putchar('\n');
        	i++;
    	}
    	return (0);
}
