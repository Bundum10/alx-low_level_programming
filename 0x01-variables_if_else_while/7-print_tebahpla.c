#include <stdio.h>

/**
 *main -Entry point
 *
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
