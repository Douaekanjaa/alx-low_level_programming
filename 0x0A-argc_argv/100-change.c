#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *main - print the min of number of coins to make change for a amount of money
  *@argc: number of passed arguments
  *@argv: array of arguments passed
  *Return: 0 success, 1 error
*/
int main(int argc, char *argv[])
{
	int nb;
	int i;
	int resultat;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	nb = atoi(argv[1]);
	resultat = 0;

	if (nb < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && nb >= 0; i++)
	{
		while (nb >= coins[i])
		{
			resultat++;
			nb -= coins[i];
		}
	}
	printf("%d\n", resultat);
	return (0);
}

