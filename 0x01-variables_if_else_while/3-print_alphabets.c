#include <stdio.h>

/**
 * main -Entry point
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
		if (n == 'z')
		{
			n = 'A';
			for (; n <= 'Z'; n++)
			{
				putchar(n);
			}
			break;
		}
	}
	putchar('\n');
	return (0);
}
