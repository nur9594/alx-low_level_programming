#include <stdio.h>
/**
 * Description: main - printout the size of variables type.
 * Return: 0 if success.
 */
int main(void)
{

	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of char: %ld byte(s)\n", sizeof(a));
	printf("size of int: %ld byte(s)\n", sizeof(b));
	printf("size of long int: %ld byte(s)\n", sizeof(c));
	printf("size of long long int: %ld byte(s)\n", sizeof(d));
	printf("size of float: %ld byte(s)\n", sizeof(e));

	return (0);
}
