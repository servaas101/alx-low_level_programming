#include <stdio.h>

/**
 * main - Fizz Buzz interview
 *
 * Return: 0
 *
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		printf("%d", i);
		printf(" ");
	}
	printf("\n");
	return (0);
}
