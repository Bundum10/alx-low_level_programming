#include <stdio.h>
/**
 * main - Entry point
 *
 *
 *
 *Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n == 'q' || n == 'e')
		{
			continue;
		}
		putchar(n);
	}
	putchar('\n');
	return (0);
}
