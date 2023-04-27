#include <stdio.h>

void first(void)__attribute__((constructor));

/**
  * first - Print a sentence before the main func is executed
  * Return: nothing
*/

void first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore");
	printf(" my house upon my back!\n");
}

