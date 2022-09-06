#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

<<<<<<< HEAD
/**
 *main - Adds positive numbers
 *@argc: size of *argv
 *@argv: array of strings
 *
 *Return: 0 on success, 1 on error
=======

/**
 * main - Adds positive numbers
 * @argc: size of *argv
 * @argv: array of strings
 *
 * Return: 0 (Success), 1 (Error)
>>>>>>> 9c481b290bd89503891797e87b299f47d07b7a88
 */
int main(int argc, char *argv[])
{
	int i, j, flag = 0, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
<<<<<<< HEAD
=======

>>>>>>> 9c481b290bd89503891797e87b299f47d07b7a88
	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				flag = 1;
			}
			j++;
		}
		if (flag)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
<<<<<<< HEAD
=======

>>>>>>> 9c481b290bd89503891797e87b299f47d07b7a88
	return (0);
}
