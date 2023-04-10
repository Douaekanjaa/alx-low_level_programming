#include <stdio.h>
#include "main.h"
/**
 * _atoi - Convert string to integer
 * @s: Input
 * Return: Integer Converted
 */

int _atoi(char *s)
{
	int i;
	int sin;
	unsigned int digit;

	i = 0;
	sin = 1;
	digit = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sin *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			digit = (digit * 10) + (s[i] - '0');
		}
		else if (digit > 0)
			break;
		i++;
	}
	return (digit * sin);
}

/**
  *main - calculate the multiplication of two numbers
  *@argc: number of arguments passed
  *@argv: array of arguments passed
  *Return: Always 0
*/
int main(int argc, char *argv[])
{
	int rs;
	int n1;
	int n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	rs = n1 * n2;

	printf("%d\n", rs);
	
	return (0);


}
