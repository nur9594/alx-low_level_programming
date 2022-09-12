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

	printf("size of char: %d byte(s)\n", Sizeof(a));
	printf("size of int: %d byte(s)\n", Sizeof(b));
	printf("size of long int: %d byte(s)\n", Sizeof(c));
	printf("size of long long int: %d byte(s)\n", Sizeof(d));
	printf("size of float: %d byte(s)\n", Sizeof(e));
	return (0);
}
