#include <stdio.h>
/**
 * Description: main - printout the result of if the condition is satisfied.
 * Return: 0 if success.
 *Betty style: the code will be checked by betty-style.p and  betty-doc.pl.
 */
int main(void)
{
	int n;
	if (n > 0)
	{
	printf("%n is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%n is zero\n", n);
	}
	else if (n < 0)
	{
	printf("%n isnegative\n", n);
	}
	return (0);
}
