#include <stdio.h>
/**
 * main - main block
 * Description: print all possible combinations for single-digit numbers.
 * numbers must be separated by commas and a space.
 * you can only use 'putchar' to print to console
 * you can only use 'putchar' upto four times.
 * you are not allowed to use any variable of type 'char'
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
