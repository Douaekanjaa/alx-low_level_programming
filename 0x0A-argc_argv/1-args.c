#include <stdio.h>
/**
  *main - Print the number of arguments passed into a program
  *@argc: number of arguments passed
  *@argv: array of arguments passed
  *Return: Always 0
*/
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);

}

