#include <stdio.h>

/**
<<<<<<< HEAD
 *main - prints the number of arguments passed into it.
 *@argc: number of command line arguments.
 *@argv: array that contains the program command line arguments.
 *
 *Return: 0 - success.
=======
 * main - prints the number of arguments passed into it.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 *
 * Return: 0 - success.
>>>>>>> 9c481b290bd89503891797e87b299f47d07b7a88
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
