#include <stdio.h>

/**
 *main -Entry point
 *
 *
 *Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putcha(n);
	}
	putchar('\n');
	return (0);
}
