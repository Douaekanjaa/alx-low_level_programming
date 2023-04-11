#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
  *digits_checker - check if the arguments passed are numbers or not
  *@ch: array ch
  *Return: Always 0
*/
int digits_checker(char *ch)
{
	int i= 0;

	while (i < (int)strlen(ch))
	{
		if (!isdigit(ch[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/**
  *main - add positive numbers
  *@argc: number of arguments passed
  *@argv: array of arguments passed
  *Return: Always 0
*/
int main(int argc, char *argv[])
{
	int j;
	int ent;
	int s = 0;

	j = 1;
	while (j < argc)
	{
		if (digits_checker(argv[j]))
		{
			ent = atoi(argv[j]);
			s += ent;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		j++;
	}
	printf("%d\n", s);
	return (0);
}


