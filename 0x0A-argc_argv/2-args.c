#include <stdio.h>

/**
<<<<<<< HEAD
 *main - prints all arguments it receives.
 *@argc: number of command line arguments.
 *@argv: array that contains the program command line arguments.
 *
 *Return: 0 - success.
=======
 * main - prints all arguments it receives.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 *
 * Return: 0 (Success).
>>>>>>> 9c481b290bd89503891797e87b299f47d07b7a88
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
