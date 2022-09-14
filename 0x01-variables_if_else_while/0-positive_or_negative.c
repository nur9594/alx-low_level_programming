#include <stdio.h>
/*
 * Description: main - printout the out put if the condition is fulfilled
 *
 *main - printout "zero","posotive " or "negative"
 * Return: 0 if success
 */

int main(void)  /* main function */

{

	int n;
	 printf("Enter anumber: ");
	 scanf("%d", &n);

	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else if   (n < 0)
	{
	printf("%d is negative\n", n);
	}
	return (0);

}

