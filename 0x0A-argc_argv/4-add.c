#include<stdlib.h>
#include<ctype.h>
#include<stdio.h>
/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success), 1 if wrong argument is given
 */
int main(int argc, char **argv)
{
	int sum, i, j;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j])
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
