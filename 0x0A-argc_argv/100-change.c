#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints the minimum number o coins to make change for an amount
 * of money
 * @argc: argument count
 * @argv: argument vector
 * Return:  0 (success), 1 for incorrect argument passage
 */
int main(int argc, char **argv)
{
	int n_change, money;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n_change = 0;
	money = atoi(argv[1]);
	if (money >= 25)
	{
		n_change += (money / 25);
		money = money - (n_change * 25);
	}
	if (money >= 10)
	{
		n_change += (money / 10);
		money -= ((money / 10) * 10);
	}
	if (money >= 5)
	{
		n_change += money / 5;
		money -= ((money / 5) * 5);
	}
	if (money >= 2)
	{
		n_change += money / 2;
		money -= ((money / 2) * 2);
	}
	if (money == 1)
	{
		n_change += 1;
		money -= 1;
	}
	printf("%d\n", n_change);
	return (0);
}
