#include <stdio.h>

/**
<<<<<<< HEAD
 *main - prints its name, followed by a new line.
 *@argc: number of command line arguments.
 *@argv: array that contains the program command line arguments.
 *
 *Return: 0 (Success)
=======
 * main - prints its name, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 *
 * Return: 0 - success.
>>>>>>> 9c481b290bd89503891797e87b299f47d07b7a88
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
