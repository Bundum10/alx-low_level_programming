#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		n = tolower(n);
		putchar(n);
	}
	putchar('\n');
	return (0);
}
