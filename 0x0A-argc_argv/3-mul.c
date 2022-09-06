#include <stdio.h>
#include <stdlib.h>

/**
<<<<<<< HEAD
 *main - multiplies two numbers.
 *@argc: number of command line arguments.
 *@argv: array that contains the program command line arguments.
 *
 *Return: 0 (Success)
=======
 * main - multiplies two numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 *
 * Return: 0 (Success)
>>>>>>> 9c481b290bd89503891797e87b299f47d07b7a88
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
